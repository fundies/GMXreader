#include <pugixml.hpp>

#include <fstream>
#include <iostream>
#include <map>
#include <sstream>
#include <vector>

#include "gmx.h"

namespace gmx {

static std::ostream outputStream(nullptr);
static std::map<std::string, std::vector<std::string>> resMap;

class visited_walker : public pugi::xml_tree_walker {
  virtual bool for_each(pugi::xml_node &node) {
    if (node.type() != 3 && std::string(node.attribute("visited").value()) != "true")
      outputStream << "Error: Node at " << node.path() << " was never visited " << std::endl;
    return true;
  }
};

class gmx_root_walker : public pugi::xml_tree_walker {
  std::map<std::string, int> constants;

  virtual bool for_each(pugi::xml_node &node) {
    if (node.type() == 3) {
      if (std::string(node.parent().name()) == "constant") {
        constants[node.parent().attribute("name").value()] = node.text().as_int();
      } else {
        resMap[std::string(node.parent().name()) + "s"].push_back(node.value());
      }
    }
    return true;
  }
};

std::string FileToString(const std::string &fName) {
  std::ifstream t(fName.c_str());
  std::stringstream buffer;
  buffer << t.rdbuf();
  return buffer.str();
}

std::vector<std::string> SplitString(const std::string &str, char delimiter) {
  std::vector<std::string> vec;
  std::stringstream sstr(str);
  std::string tmp;
  while (std::getline(sstr, tmp, delimiter)) vec.push_back(tmp);

  return vec;
}

void PackScript(std::string fName, buffers::resources::Script *script) {
  outputStream << "Parsing " << fName << std::endl;
  std::string code = FileToString(fName);

  if (code.empty()) outputStream << "Error: " << fName << " empty." << std::endl;

  outputStream << "Setting code as:" << std::endl << code << std::endl;
  script->set_code(code);
}

void PackShader(std::string fName, buffers::resources::Shader *shader) {
  outputStream << "Parsing " << fName << std::endl;
  std::string code = FileToString(fName);

  if (code.empty()) outputStream << "Error: " << fName << " empty." << std::endl;

  // I've seen a few different versions of this marker on github n such. I dunno which is correct
  const std::string marker = "//######################_==_YOYO_SHADER_MARKER_==_######################@~/*";
  size_t markerPos = code.find(marker);

  if (markerPos == std::string::npos)
    outputStream << "Error: missing shader marker." << std::endl;
  else {
    std::string vert = code.substr(0, markerPos);
    std::string frag = code.substr(markerPos + marker.length() - 1, code.length() - 1);
    outputStream << "Setting vertex code as:" << std::endl << vert << std::endl;
    outputStream << "Setting fragment code as:" << std::endl << frag << std::endl;
    shader->set_vertex_code(vert);
    shader->set_fragment_code(frag);
  }
}

void PackRes(std::string &name, pugi::xml_node &node, google::protobuf::Message *m, int depth) {
  const google::protobuf::Descriptor *desc = m->GetDescriptor();
  const google::protobuf::Reflection *refl = m->GetReflection();
  for (int i = 0; i < desc->field_count(); i++) {
    const google::protobuf::FieldDescriptor *field = desc->field(i);
    const google::protobuf::FieldOptions opts = field->options();

    if (depth == 0 && field->name() == "name") {
      outputStream << "Setting " << field->name() << " (" << field->type_name() << ") as " << name.c_str() << std::endl;
      refl->SetString(m, field, name);
    } else {
      const std::string gmxName = opts.GetExtension(buffers::gmx);
      std::string xmlElement = gmxName;
      bool isSplit = false;
      bool isAttribute = false;
      pugi::xml_node child = node;
      pugi::xml_attribute attr;

      // if deprecated we'll just try gmx name anyway and not whine when it fails
      if (gmxName == "GMX_DEPRECATED")
        xmlElement = gmxName;
      else {
        // use the name the protobuf field uses unless there a (gmx) attr
        if (xmlElement.empty()) xmlElement = field->name();

        // this is for <point>0,0</point> crap
        const std::string splitMarker = "GMX_SPLIT/";
        size_t splitPos = gmxName.find(splitMarker);
        isSplit = splitPos != std::string::npos;

        // if it's not a split then we deal with yoyo's useless nesting
        if (!isSplit) {
          std::vector<std::string> nodes = SplitString(xmlElement, '/');
          for (auto n : nodes) {
            child = child.child(n.c_str());
            child.append_attribute("visited") = "true";
            xmlElement = n;
          }
        }

        // We want the data from the node "child" but if its empty what we seek is likely in the attributes
        if (child.empty()) attr = node.attribute(xmlElement.c_str());
        isAttribute = !attr.empty();
      }

      if (child.empty() && gmxName != "GMX_DEPRECATED" && !isAttribute && !field->is_repeated()) {
        // ename only exists if etype = 4. Also, etype and enumb don't exist in timeline events
        pugi::xml_attribute a = node.attribute("eventtype");
        if (xmlElement != "ename" && a.as_int() != 4 && node.path() != "/timeline/entry/event")
          outputStream << "Error: no such element " << node.path() << "/" << xmlElement << std::endl;
      } else if (gmxName != "GMX_DEPRECATED") {
        if (field->is_repeated()) {
          outputStream << "Appending (" << field->type_name() << ") to " << field->name() << std::endl;

          switch (field->cpp_type()) {
            case google::protobuf::FieldDescriptor::FieldDescriptor::CppType::CPPTYPE_MESSAGE: {
              for (pugi::xml_node n = child; n != nullptr; n = n.next_sibling()) {
                // skip over any siblings that aren't twins
                if (n.name() == xmlElement) {
                  n.append_attribute("visited") = "true";
                  google::protobuf::Message *msg = refl->AddMessage(m, field);
                  PackRes(name, n, msg, depth + 1);
                }
              }
              break;
            }

            case google::protobuf::FieldDescriptor::CppType::CPPTYPE_STRING: {
              for (pugi::xml_node n = child; n != nullptr; n = n.next_sibling()) {
                if (n.name() == xmlElement) {
                  n.append_attribute("visited") = "true";
                  refl->AddString(m, field, n.text().as_string());
                }
              }
              break;
            }

            default: {
              outputStream << "Error: missing condition for repeated type: " << field->type_name()
                           << ". Instigated by: " << field->type_name() << std::endl;
              // I don't think we repeat anything other than messages and strings
              break;
            }
          }
        } else {
          pugi::xml_text xmlValue;
          std::string splitValue;

          if (!isAttribute) {
            if (isSplit) {
              std::vector<std::string> split = SplitString(node.text().as_string(), ',');
              splitValue = split[static_cast<int>(gmxName.back()) - '0'];
            } else
              xmlValue = child.text();
          }

          std::string value = (isAttribute) ? attr.as_string() : (isSplit) ? splitValue : xmlValue.as_string();
          outputStream << "Setting " << field->name() << " (" << field->type_name() << ") as " << value << std::endl;

          switch (field->cpp_type()) {
            case google::protobuf::FieldDescriptor::CppType::CPPTYPE_MESSAGE: {
              google::protobuf::Message *msg = refl->MutableMessage(m, field);
              PackRes(name, child, msg, depth + 1);
              break;
            }
            case google::protobuf::FieldDescriptor::CppType::CPPTYPE_INT32: {
              refl->SetInt32(m, field,
                             (isAttribute) ? attr.as_int() : (isSplit) ? std::stoi(splitValue) : xmlValue.as_int());
              break;
            }
            case google::protobuf::FieldDescriptor::CppType::CPPTYPE_INT64: {
              refl->SetInt64(m, field,
                             (isAttribute) ? attr.as_int() : (isSplit) ? std::stoi(splitValue) : xmlValue.as_int());
              break;
            }
            case google::protobuf::FieldDescriptor::CppType::CPPTYPE_UINT32: {
              refl->SetUInt32(m, field,
                              (isAttribute) ? attr.as_uint() : (isSplit) ? std::stoi(splitValue) : xmlValue.as_uint());
              break;
            }
            case google::protobuf::FieldDescriptor::CppType::CPPTYPE_UINT64: {
              refl->SetUInt64(m, field,
                              (isAttribute) ? attr.as_uint() : (isSplit) ? std::stoi(splitValue) : xmlValue.as_uint());
              break;
            }
            case google::protobuf::FieldDescriptor::CppType::CPPTYPE_DOUBLE: {
              refl->SetDouble(
                  m, field,
                  (isAttribute) ? attr.as_double() : (isSplit) ? std::stod(splitValue) : xmlValue.as_double());
              break;
            }
            case google::protobuf::FieldDescriptor::CppType::CPPTYPE_FLOAT: {
              refl->SetFloat(m, field,
                             (isAttribute) ? attr.as_float() : (isSplit) ? std::stof(splitValue) : xmlValue.as_float());
              break;
            }
            case google::protobuf::FieldDescriptor::CppType::CPPTYPE_BOOL: {
              refl->SetBool(m, field,
                            (isAttribute) ? attr.as_bool() : (isSplit) ? (splitValue != "0") : xmlValue.as_bool());
              break;
            }
            case google::protobuf::FieldDescriptor::CppType::CPPTYPE_ENUM: {
              //refl->SetEnum(m, field,
              //             (isAttribute) ? attr.as_int() : (isSplit) ? std::stoi(splitValue) : xmlValue.as_int());
              break;
            }
            case google::protobuf::FieldDescriptor::CppType::CPPTYPE_STRING: {
              refl->SetString(m, field, (isSplit) ? splitValue : xmlValue.as_string());
              break;
            }
          }
        }
      }
    }
  }
}

void PackBuffer(google::protobuf::Message *m, std::string gmxPath) {
  const google::protobuf::Descriptor *desc = m->GetDescriptor();
  const google::protobuf::Reflection *refl = m->GetReflection();

  // Iterate over fbs fields
  for (int i = 0; i < desc->field_count(); i++) {
    const google::protobuf::FieldDescriptor *field = desc->field(i);
    std::string name = field->name();

    if (resMap.find(name) != resMap.end()) {
      outputStream << "Found " << resMap.at(name).size() << " " << name << std::endl;

      // Scripts and Shaders are plain text not xml
      for (const auto &res : resMap.at(name)) {
        std::string fName = res;
        std::replace(fName.begin(), fName.end(), '\\', '/');
        std::string type = name.substr(0, name.length() - 1);
        std::string resName = fName.substr(fName.find_last_of('/') + 1, fName.length() - 1);

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
            outputStream << "Error opening: " << fName << " : " << result.description() << std::endl;
          else {
            outputStream << "Parsing " << fName << "..." << std::endl;
            // Start a resource (sprite, object, room)
            google::protobuf::Message *msg = refl->AddMessage(m, field);
            PackRes(resName, root, msg, 0);

            visited_walker walker;
            doc.traverse(walker);
          }
        }
      }
    }
  }
}

buffers::Project *LoadGMX(std::string fName, bool verbose) {
  if (verbose) outputStream.rdbuf(std::cerr.rdbuf());

  buffers::Project *proj = new buffers::Project();
  pugi::xml_document doc;
  if (!doc.load_file(fName.c_str())) return nullptr;

  gmx_root_walker walker;
  doc.traverse(walker);

  std::string gmxPath = fName.substr(0, fName.find_last_of("/\\") + 1);
  PackBuffer(proj, gmxPath);

  return proj;
}

}  //namespace gmx
