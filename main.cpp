#include "game.pb.h"

#include <pugixml.hpp>

#include <iostream>
#include <map>
#include <vector>
#include <string>

class GMXReader : public pugi::xml_tree_walker
{
public:
    GMXReader() = default;
    
    bool Open(std::string gmxFile)
    {
      std::cout << "Opening: " << gmxFile << std::endl;
      
      pugi::xml_document doc;
      
      if (!doc.load_file(gmxFile.c_str()))
        return false;
        
      gmxPath = gmxFile.substr(0, gmxFile.find_last_of("/\\")+1);
        
      return doc.traverse(*this);
    }
    
    virtual bool for_each(pugi::xml_node& node)
    {
      if (node.type() == 3)
      {
        if (std::string(node.parent().name()) == "constant")
        {
          //std::cout << node.parent().attribute("name").value() << "=" << node.text().as_int() << std::endl;
          constants[node.parent().attribute("name").value()] = node.text().as_int();
        }
        else
        {
          //std::cout << node.parent().name() << "=" << node.value() << std::endl;
          resMap[std::string(node.parent().name()) + "s"].push_back(node.value());
        }
      }
      
      return true;
    }
    
    void PrintInfo()
    {
        std::cout << "Found:" << std::endl;
        for(auto it = resMap.begin(); it != resMap.end(); ++it)
        {
            std::cout << "  " << it->first << ": " << it->second.size() << std::endl; 
        }
    }
    
    void PackBuffer(google::protobuf::Message* m)
    {
      const google::protobuf::Descriptor *desc = m->GetDescriptor();
      const google::protobuf::Reflection *refl = m->GetReflection();      
      
      // Iterate over fbs fields
      for (size_t i = 0; i < desc->field_count(); i++)
      {
        const google::protobuf::FieldDescriptor *field = desc->field(i);
        //fprintf(stderr, "The name of the %zu element is %s and the type is %s \n",i,field->name().c_str(),field->type_name());
        
        std::string name = field->name();
        
        if (resMap.find(name) != resMap.end())
        {
          std::cout << "Found " << resMap.at(name).size() << " " << name << std::endl;
          
          // Scripts and Shaders are plain text not xml
          if (name != "scripts" && name != "shaders")
          {
            for (const auto& res : resMap.at(name))
            {
              std::string fName = res;
              std::replace(fName.begin(), fName.end(), '\\', '/');
              std::string type = name.substr(0, name.length()-1);
              fName = gmxPath + fName + "." + type + ".gmx";
              
              pugi::xml_document doc;
              pugi::xml_parse_result result = doc.load_file(fName.c_str());
              pugi::xml_node root = doc.document_element();
              
              if (!result)
                std::cerr << "Error opening: " << fName << " : " << result.description() << std::endl;
              else
              {
                std::cout << "Parsing " << fName << "..." << std::endl;
                // Start a resource (sprite, object, room)
                google::protobuf::Message *msg = refl->AddMessage(m, field);
                PackRes(root, msg);
              }
            }
          } 
        }
      }
    }

    void PackRes(const pugi::xml_node& node, google::protobuf::Message* m)
    {
      const google::protobuf::Descriptor *desc = m->GetDescriptor();
      const google::protobuf::Reflection *refl = m->GetReflection();     
      for (size_t i = 0; i < desc->field_count(); i++)
      {
        const google::protobuf::FieldDescriptor *field = desc->field(i);
        const google::protobuf::FieldOptions opts = field->options();
        
        //bool fieldRepeated = field->is_repeated();
        
        std::string xmlElement = opts.GetExtension(enigma::proto::resource::gmx);
        
        if (xmlElement.empty())
          xmlElement = field->name();
          
        pugi::xml_node child = node.child(xmlElement.c_str());
        if (child == nullptr)
          std::cerr << "Error: no such element " << xmlElement << std::endl;
        else
        {
          if (field->is_repeated())
          {
            for (; child != nullptr; child = child.next_sibling())
            {
              switch (field->cpp_type())
              {
                case google::protobuf::FieldDescriptor::FieldDescriptor::CppType::CPPTYPE_MESSAGE:
                {
                  google::protobuf::Message *msg = refl->AddMessage(m, field);
                  PackRes(child, msg);
                  break;
                }
                
                default:
                {
                  //fprintf(stderr, "The name of the %zu element is %s and the type is %s \n",i,field->name().c_str(),field->type_name());
                  // I don't think we repeat anything other than messages
                  break;
                }
              }
            }
          }
          else
          {
            pugi::xml_text xmlValue;
            xmlValue = child.text();
            fprintf(stderr, "Setting %s (%s) as %s \n",field->name().c_str(),field->type_name(), xmlValue.as_string());
            
            switch (field->cpp_type())
            {
              case google::protobuf::FieldDescriptor::CppType::CPPTYPE_MESSAGE:
              {
                google::protobuf::Message *msg = refl->AddMessage(m, field);
                PackRes(child, msg);
                break;
              }
              case google::protobuf::FieldDescriptor::CppType::CPPTYPE_INT32:
              {
                refl->SetInt32(m, field, xmlValue.as_int());
                break;
              }
              case google::protobuf::FieldDescriptor::CppType::CPPTYPE_INT64:
              {
                refl->SetInt64(m, field, xmlValue.as_int());
                break;
              }
              case google::protobuf::FieldDescriptor::CppType::CPPTYPE_UINT32:
              {
                refl->SetUInt32(m, field, xmlValue.as_uint());
                break;
              }
              case google::protobuf::FieldDescriptor::CppType::CPPTYPE_UINT64:
              {
                refl->SetUInt64(m, field, xmlValue.as_uint());
                break;
              }
              case google::protobuf::FieldDescriptor::CppType::CPPTYPE_DOUBLE:
              {
                refl->SetDouble(m, field, xmlValue.as_double());
                break;
              }
              case google::protobuf::FieldDescriptor::CppType::CPPTYPE_FLOAT:
              {
                refl->SetFloat(m, field, xmlValue.as_float());
                break;
              }
              case google::protobuf::FieldDescriptor::CppType::CPPTYPE_BOOL:
              {
                refl->SetBool(m, field, xmlValue.as_bool());
                break;
              }
              case google::protobuf::FieldDescriptor::CppType::CPPTYPE_ENUM:
              {
                break;
              }
              case google::protobuf::FieldDescriptor::CppType::CPPTYPE_STRING:
              {
                refl->SetString(m, field, xmlValue.as_string());
                break;
              }
            }
          }
        }
      }
    }
    
    void PackProjectBuffer()
    {
      enigma::proto::resource::Project proj;
      PackBuffer(&proj);
    }

protected:
    std::string gmxPath;
    std::map<std::string, std::vector<std::string>> resMap;
    std::map<std::string, int> constants;
};

int main(int arc, char* argv[])
{
    GMXReader gmx;
    if (!gmx.Open(argv[1]))
        return -1;

    gmx.PackProjectBuffer();

    return 0;
}
