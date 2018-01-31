#include "codegen/game.pb.h"

#include <pugixml.hpp>

#include <fstream>
#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

class visited_walker : public pugi::xml_tree_walker {
  virtual bool for_each(pugi::xml_node &node) {
    if (node.type() != 3 && std::string(node.attribute("visited").value()) != "true")
      std::cerr << "Error: Node at " << node.path() << " was never visited " << std::endl;
    return true;
  }
};

class GMXReader : public pugi::xml_tree_walker {
 public:
  GMXReader() = default;

  bool Open(std::string gmxFile) {
    std::cout << "Opening: " << gmxFile << std::endl;

    pugi::xml_document doc;

    if (!doc.load_file(gmxFile.c_str())) return false;

    gmxPath = gmxFile.substr(0, gmxFile.find_last_of("/\\") + 1);

    return doc.traverse(*this);
  }

  virtual bool for_each(pugi::xml_node &node) {
    if (node.type() == 3) {
      if (std::string(node.parent().name()) == "constant") {
        //std::cout << node.parent().attribute("name").value() << "=" << node.text().as_int() << std::endl;
        constants[node.parent().attribute("name").value()] = node.text().as_int();
      } else {
        //std::cout << node.parent().name() << "=" << node.value() << std::endl;
        resMap[std::string(node.parent().name()) + "s"].push_back(node.value());
      }
    }

    return true;
  }

  void PackBuffer(google::protobuf::Message *m) {
    const google::protobuf::Descriptor *desc = m->GetDescriptor();
    const google::protobuf::Reflection *refl = m->GetReflection();

    // Iterate over fbs fields
    for (size_t i = 0; i < desc->field_count(); i++) {
      const google::protobuf::FieldDescriptor *field = desc->field(i);
      //fprintf(stderr, "The name of the %zu element is %s and the type is %s \n",i,field->name().c_str(),field->type_name());

      std::string name = field->name();

      if (resMap.find(name) != resMap.end()) {
        std::cout << "Found " << resMap.at(name).size() << " " << name << std::endl;

        // Scripts and Shaders are plain text not xml
        for (const auto &res : resMap.at(name)) {
          std::string fName = res;
          std::replace(fName.begin(), fName.end(), '\\', '/');
          std::string type = name.substr(0, name.length() - 1);

          if (name == "scripts") {
            buffers::resources::Script *script = new buffers::resources::Script();
            PackScript(gmxPath + fName, script);
            google::protobuf::Message *msg = refl->AddMessage(m, field);
            msg->CopyFrom(*static_cast<google::protobuf::Message *>(script));
          } else if (name == "shaders") {
            buffers::resources::Shader *shader = new buffers::resources::Shader();
            PackShader(gmxPath + fName, shader);
            google::protobuf::Message *msg = refl->AddMessage(m, field);
            msg->CopyFrom(*static_cast<google::protobuf::Message *>(shader));
          } else {
            fName = gmxPath + fName + "." + type + ".gmx";

            pugi::xml_document doc;
            pugi::xml_parse_result result = doc.load_file(fName.c_str());
            pugi::xml_node root = doc.document_element();
            root.append_attribute("visited") = "true";

            if (!result)
              std::cerr << "Error opening: " << fName << " : " << result.description() << std::endl;
            else {
              std::cout << "Parsing " << fName << "..." << std::endl;
              // Start a resource (sprite, object, room)
              google::protobuf::Message *msg = refl->AddMessage(m, field);
              PackRes(root, msg);

              visited_walker walker;
              doc.traverse(walker);
            }
          }
        }
      }
    }
  }

  std::string FileToString(const std::string fName) {
    std::ifstream t(fName.c_str());
    std::stringstream buffer;
    buffer << t.rdbuf();
    return buffer.str();
  }

  void PackScript(std::string fName, buffers::resources::Script *script) {
    std::cout << "Parsing " << fName << std::endl;
    std::string code = FileToString(fName);

    if (code.empty()) std::cerr << "Error: " << fName << " empty." << std::endl;

    std::cerr << "Setting code as:" << std::endl << code << std::endl;
    script->set_code(code);
  }

  void PackShader(std::string fName, buffers::resources::Shader *shader) {
    std::cout << "Parsing " << fName << std::endl;
    std::string code = FileToString(fName);

    if (code.empty()) std::cerr << "Error: " << fName << " empty." << std::endl;

    const std::string marker = "//######################_==_YOYO_SHADER_MARKER_==_######################@~/*";
    size_t markerPos = code.find(marker);

    if (markerPos == std::string::npos)
      std::cerr << "Error: missing shader marker." << std::endl;
    else {
      std::string vert = code.substr(0, markerPos);
      std::string frag = code.substr(markerPos + marker.length() - 1, code.length() - 1);
      std::cerr << "Setting vertex code as:" << std::endl << vert << std::endl;
      std::cerr << "Setting fragment code as:" << std::endl << frag << std::endl;
      shader->set_vertex_code(vert);
      shader->set_fragment_code(frag);
    }
  }

  void PackRes(pugi::xml_node &node, google::protobuf::Message *m) {
    const google::protobuf::Descriptor *desc = m->GetDescriptor();
    const google::protobuf::Reflection *refl = m->GetReflection();
    for (size_t i = 0; i < desc->field_count(); i++) {
      const google::protobuf::FieldDescriptor *field = desc->field(i);
      const google::protobuf::FieldOptions opts = field->options();

      std::string xmlElement = opts.GetExtension(buffers::gmx);

      if (xmlElement.empty()) xmlElement = field->name();

      pugi::xml_node child = node.child(xmlElement.c_str());
      if (child == nullptr)
        std::cerr << "Error: no such element " << xmlElement << std::endl;
      else {
        child.append_attribute("visited") = "true";
        if (field->is_repeated()) {
          for (; child != nullptr; child = child.next_sibling()) {
            switch (field->cpp_type()) {
              case google::protobuf::FieldDescriptor::FieldDescriptor::CppType::CPPTYPE_MESSAGE: {
                google::protobuf::Message *msg = refl->AddMessage(m, field);
                PackRes(child, msg);
                break;
              }

              default: {
                //fprintf(stderr, "The name of the %zu element is %s and the type is %s \n",i,field->name().c_str(),field->type_name());
                // I don't think we repeat anything other than messages
                break;
              }
            }
          }
        } else {
          pugi::xml_text xmlValue;
          xmlValue = child.text();
          fprintf(stderr, "Setting %s (%s) as %s \n", field->name().c_str(), field->type_name(), xmlValue.as_string());

          switch (field->cpp_type()) {
            case google::protobuf::FieldDescriptor::CppType::CPPTYPE_MESSAGE: {
              google::protobuf::Message *msg = refl->AddMessage(m, field);
              PackRes(child, msg);
              break;
            }
            case google::protobuf::FieldDescriptor::CppType::CPPTYPE_INT32: {
              refl->SetInt32(m, field, xmlValue.as_int());
              break;
            }
            case google::protobuf::FieldDescriptor::CppType::CPPTYPE_INT64: {
              refl->SetInt64(m, field, xmlValue.as_int());
              break;
            }
            case google::protobuf::FieldDescriptor::CppType::CPPTYPE_UINT32: {
              refl->SetUInt32(m, field, xmlValue.as_uint());
              break;
            }
            case google::protobuf::FieldDescriptor::CppType::CPPTYPE_UINT64: {
              refl->SetUInt64(m, field, xmlValue.as_uint());
              break;
            }
            case google::protobuf::FieldDescriptor::CppType::CPPTYPE_DOUBLE: {
              refl->SetDouble(m, field, xmlValue.as_double());
              break;
            }
            case google::protobuf::FieldDescriptor::CppType::CPPTYPE_FLOAT: {
              refl->SetFloat(m, field, xmlValue.as_float());
              break;
            }
            case google::protobuf::FieldDescriptor::CppType::CPPTYPE_BOOL: {
              refl->SetBool(m, field, xmlValue.as_bool());
              break;
            }
            case google::protobuf::FieldDescriptor::CppType::CPPTYPE_ENUM: {
              break;
            }
            case google::protobuf::FieldDescriptor::CppType::CPPTYPE_STRING: {
              refl->SetString(m, field, xmlValue.as_string());
              break;
            }
          }
        }
      }
    }
  }

  void PackProjectBuffer() {
    buffers::Project proj;
    PackBuffer(&proj);
  }

 protected:
  std::string gmxPath;
  std::map<std::string, std::vector<std::string>> resMap;
  std::map<std::string, int> constants;
};

int main(int arc, char *argv[]) {
  GMXReader gmx;
  if (!gmx.Open(argv[1])) return -1;

  gmx.PackProjectBuffer();

  return 0;
}
