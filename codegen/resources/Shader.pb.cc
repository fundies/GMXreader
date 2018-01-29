// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: resources/Shader.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "resources/Shader.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace buffers {
namespace resources {
class ShaderDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<Shader>
     _instance;
} _Shader_default_instance_;

namespace protobuf_resources_2fShader_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Shader, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Shader, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Shader, name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Shader, id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Shader, type_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Shader, precompile_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Shader, vertex_code_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Shader, fragment_code_),
  0,
  3,
  4,
  5,
  1,
  2,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 11, sizeof(Shader)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_Shader_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "resources/Shader.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace
void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::buffers::protobuf_options_2eproto::InitDefaults();
  _Shader_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_Shader_default_instance_);}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\026resources/Shader.proto\022\021buffers.resour"
      "ces\032\roptions.proto\"\305\001\n\006Shader\022\014\n\004name\030\001 "
      "\001(\t\022\n\n\002id\030\002 \001(\005\022,\n\004type\030\003 \001(\0162\036.buffers."
      "resources.Shader.Type\022\022\n\nprecompile\030\004 \001("
      "\010\022\023\n\013vertex_code\030\005 \001(\t\022\025\n\rfragment_code\030"
      "\006 \001(\t\"3\n\004Type\022\010\n\004GLSL\020\000\022\n\n\006GLSLES\020\001\022\t\n\005H"
      "LSL9\020\002\022\n\n\006HLSL11\020\003"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 258);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "resources/Shader.proto", &protobuf_RegisterTypes);
  ::buffers::protobuf_options_2eproto::AddDescriptors();
}
} // anonymous namespace

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_resources_2fShader_2eproto

const ::google::protobuf::EnumDescriptor* Shader_Type_descriptor() {
  protobuf_resources_2fShader_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_resources_2fShader_2eproto::file_level_enum_descriptors[0];
}
bool Shader_Type_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const Shader_Type Shader::GLSL;
const Shader_Type Shader::GLSLES;
const Shader_Type Shader::HLSL9;
const Shader_Type Shader::HLSL11;
const Shader_Type Shader::Type_MIN;
const Shader_Type Shader::Type_MAX;
const int Shader::Type_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Shader::kNameFieldNumber;
const int Shader::kIdFieldNumber;
const int Shader::kTypeFieldNumber;
const int Shader::kPrecompileFieldNumber;
const int Shader::kVertexCodeFieldNumber;
const int Shader::kFragmentCodeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Shader::Shader()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_resources_2fShader_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:buffers.resources.Shader)
}
Shader::Shader(const Shader& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_name()) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  vertex_code_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_vertex_code()) {
    vertex_code_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.vertex_code_);
  }
  fragment_code_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_fragment_code()) {
    fragment_code_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.fragment_code_);
  }
  ::memcpy(&id_, &from.id_,
    static_cast<size_t>(reinterpret_cast<char*>(&precompile_) -
    reinterpret_cast<char*>(&id_)) + sizeof(precompile_));
  // @@protoc_insertion_point(copy_constructor:buffers.resources.Shader)
}

void Shader::SharedCtor() {
  _cached_size_ = 0;
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  vertex_code_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  fragment_code_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&precompile_) -
      reinterpret_cast<char*>(&id_)) + sizeof(precompile_));
}

Shader::~Shader() {
  // @@protoc_insertion_point(destructor:buffers.resources.Shader)
  SharedDtor();
}

void Shader::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  vertex_code_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  fragment_code_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Shader::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Shader::descriptor() {
  protobuf_resources_2fShader_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_resources_2fShader_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Shader& Shader::default_instance() {
  protobuf_resources_2fShader_2eproto::InitDefaults();
  return *internal_default_instance();
}

Shader* Shader::New(::google::protobuf::Arena* arena) const {
  Shader* n = new Shader;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Shader::Clear() {
// @@protoc_insertion_point(message_clear_start:buffers.resources.Shader)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(!name_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*name_.UnsafeRawStringPointer())->clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(!vertex_code_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*vertex_code_.UnsafeRawStringPointer())->clear();
    }
    if (cached_has_bits & 0x00000004u) {
      GOOGLE_DCHECK(!fragment_code_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*fragment_code_.UnsafeRawStringPointer())->clear();
    }
  }
  if (cached_has_bits & 56u) {
    ::memset(&id_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&precompile_) -
        reinterpret_cast<char*>(&id_)) + sizeof(precompile_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool Shader::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:buffers.resources.Shader)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->name().data(), static_cast<int>(this->name().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "buffers.resources.Shader.name");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int32 id = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          set_has_id();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .buffers.resources.Shader.Type type = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::buffers::resources::Shader_Type_IsValid(value)) {
            set_type(static_cast< ::buffers::resources::Shader_Type >(value));
          } else {
            mutable_unknown_fields()->AddVarint(
                3, static_cast< ::google::protobuf::uint64>(value));
          }
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bool precompile = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {
          set_has_precompile();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &precompile_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string vertex_code = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_vertex_code()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->vertex_code().data(), static_cast<int>(this->vertex_code().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "buffers.resources.Shader.vertex_code");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string fragment_code = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_fragment_code()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->fragment_code().data(), static_cast<int>(this->fragment_code().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "buffers.resources.Shader.fragment_code");
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:buffers.resources.Shader)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:buffers.resources.Shader)
  return false;
#undef DO_
}

void Shader::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:buffers.resources.Shader)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string name = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "buffers.resources.Shader.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // optional int32 id = 2;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->id(), output);
  }

  // optional .buffers.resources.Shader.Type type = 3;
  if (cached_has_bits & 0x00000010u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      3, this->type(), output);
  }

  // optional bool precompile = 4;
  if (cached_has_bits & 0x00000020u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(4, this->precompile(), output);
  }

  // optional string vertex_code = 5;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->vertex_code().data(), static_cast<int>(this->vertex_code().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "buffers.resources.Shader.vertex_code");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->vertex_code(), output);
  }

  // optional string fragment_code = 6;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->fragment_code().data(), static_cast<int>(this->fragment_code().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "buffers.resources.Shader.fragment_code");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      6, this->fragment_code(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:buffers.resources.Shader)
}

::google::protobuf::uint8* Shader::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:buffers.resources.Shader)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string name = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "buffers.resources.Shader.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // optional int32 id = 2;
  if (cached_has_bits & 0x00000008u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->id(), target);
  }

  // optional .buffers.resources.Shader.Type type = 3;
  if (cached_has_bits & 0x00000010u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      3, this->type(), target);
  }

  // optional bool precompile = 4;
  if (cached_has_bits & 0x00000020u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(4, this->precompile(), target);
  }

  // optional string vertex_code = 5;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->vertex_code().data(), static_cast<int>(this->vertex_code().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "buffers.resources.Shader.vertex_code");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->vertex_code(), target);
  }

  // optional string fragment_code = 6;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->fragment_code().data(), static_cast<int>(this->fragment_code().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "buffers.resources.Shader.fragment_code");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        6, this->fragment_code(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:buffers.resources.Shader)
  return target;
}

size_t Shader::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:buffers.resources.Shader)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (_has_bits_[0 / 32] & 63u) {
    // optional string name = 1;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

    // optional string vertex_code = 5;
    if (has_vertex_code()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->vertex_code());
    }

    // optional string fragment_code = 6;
    if (has_fragment_code()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->fragment_code());
    }

    // optional int32 id = 2;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
    }

    // optional .buffers.resources.Shader.Type type = 3;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
    }

    // optional bool precompile = 4;
    if (has_precompile()) {
      total_size += 1 + 1;
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Shader::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:buffers.resources.Shader)
  GOOGLE_DCHECK_NE(&from, this);
  const Shader* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Shader>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:buffers.resources.Shader)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:buffers.resources.Shader)
    MergeFrom(*source);
  }
}

void Shader::MergeFrom(const Shader& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:buffers.resources.Shader)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 63u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_name();
      name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
    }
    if (cached_has_bits & 0x00000002u) {
      set_has_vertex_code();
      vertex_code_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.vertex_code_);
    }
    if (cached_has_bits & 0x00000004u) {
      set_has_fragment_code();
      fragment_code_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.fragment_code_);
    }
    if (cached_has_bits & 0x00000008u) {
      id_ = from.id_;
    }
    if (cached_has_bits & 0x00000010u) {
      type_ = from.type_;
    }
    if (cached_has_bits & 0x00000020u) {
      precompile_ = from.precompile_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Shader::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:buffers.resources.Shader)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Shader::CopyFrom(const Shader& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:buffers.resources.Shader)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Shader::IsInitialized() const {
  return true;
}

void Shader::Swap(Shader* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Shader::InternalSwap(Shader* other) {
  using std::swap;
  name_.Swap(&other->name_);
  vertex_code_.Swap(&other->vertex_code_);
  fragment_code_.Swap(&other->fragment_code_);
  swap(id_, other->id_);
  swap(type_, other->type_);
  swap(precompile_, other->precompile_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Shader::GetMetadata() const {
  protobuf_resources_2fShader_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_resources_2fShader_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Shader

// optional string name = 1;
bool Shader::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void Shader::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
void Shader::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
void Shader::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name();
}
const ::std::string& Shader::name() const {
  // @@protoc_insertion_point(field_get:buffers.resources.Shader.name)
  return name_.GetNoArena();
}
void Shader::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:buffers.resources.Shader.name)
}
#if LANG_CXX11
void Shader::set_name(::std::string&& value) {
  set_has_name();
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:buffers.resources.Shader.name)
}
#endif
void Shader::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:buffers.resources.Shader.name)
}
void Shader::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:buffers.resources.Shader.name)
}
::std::string* Shader::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:buffers.resources.Shader.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* Shader::release_name() {
  // @@protoc_insertion_point(field_release:buffers.resources.Shader.name)
  clear_has_name();
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Shader::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:buffers.resources.Shader.name)
}

// optional int32 id = 2;
bool Shader::has_id() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void Shader::set_has_id() {
  _has_bits_[0] |= 0x00000008u;
}
void Shader::clear_has_id() {
  _has_bits_[0] &= ~0x00000008u;
}
void Shader::clear_id() {
  id_ = 0;
  clear_has_id();
}
::google::protobuf::int32 Shader::id() const {
  // @@protoc_insertion_point(field_get:buffers.resources.Shader.id)
  return id_;
}
void Shader::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:buffers.resources.Shader.id)
}

// optional .buffers.resources.Shader.Type type = 3;
bool Shader::has_type() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
void Shader::set_has_type() {
  _has_bits_[0] |= 0x00000010u;
}
void Shader::clear_has_type() {
  _has_bits_[0] &= ~0x00000010u;
}
void Shader::clear_type() {
  type_ = 0;
  clear_has_type();
}
::buffers::resources::Shader_Type Shader::type() const {
  // @@protoc_insertion_point(field_get:buffers.resources.Shader.type)
  return static_cast< ::buffers::resources::Shader_Type >(type_);
}
void Shader::set_type(::buffers::resources::Shader_Type value) {
  assert(::buffers::resources::Shader_Type_IsValid(value));
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:buffers.resources.Shader.type)
}

// optional bool precompile = 4;
bool Shader::has_precompile() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
void Shader::set_has_precompile() {
  _has_bits_[0] |= 0x00000020u;
}
void Shader::clear_has_precompile() {
  _has_bits_[0] &= ~0x00000020u;
}
void Shader::clear_precompile() {
  precompile_ = false;
  clear_has_precompile();
}
bool Shader::precompile() const {
  // @@protoc_insertion_point(field_get:buffers.resources.Shader.precompile)
  return precompile_;
}
void Shader::set_precompile(bool value) {
  set_has_precompile();
  precompile_ = value;
  // @@protoc_insertion_point(field_set:buffers.resources.Shader.precompile)
}

// optional string vertex_code = 5;
bool Shader::has_vertex_code() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void Shader::set_has_vertex_code() {
  _has_bits_[0] |= 0x00000002u;
}
void Shader::clear_has_vertex_code() {
  _has_bits_[0] &= ~0x00000002u;
}
void Shader::clear_vertex_code() {
  vertex_code_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_vertex_code();
}
const ::std::string& Shader::vertex_code() const {
  // @@protoc_insertion_point(field_get:buffers.resources.Shader.vertex_code)
  return vertex_code_.GetNoArena();
}
void Shader::set_vertex_code(const ::std::string& value) {
  set_has_vertex_code();
  vertex_code_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:buffers.resources.Shader.vertex_code)
}
#if LANG_CXX11
void Shader::set_vertex_code(::std::string&& value) {
  set_has_vertex_code();
  vertex_code_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:buffers.resources.Shader.vertex_code)
}
#endif
void Shader::set_vertex_code(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_vertex_code();
  vertex_code_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:buffers.resources.Shader.vertex_code)
}
void Shader::set_vertex_code(const char* value, size_t size) {
  set_has_vertex_code();
  vertex_code_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:buffers.resources.Shader.vertex_code)
}
::std::string* Shader::mutable_vertex_code() {
  set_has_vertex_code();
  // @@protoc_insertion_point(field_mutable:buffers.resources.Shader.vertex_code)
  return vertex_code_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* Shader::release_vertex_code() {
  // @@protoc_insertion_point(field_release:buffers.resources.Shader.vertex_code)
  clear_has_vertex_code();
  return vertex_code_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Shader::set_allocated_vertex_code(::std::string* vertex_code) {
  if (vertex_code != NULL) {
    set_has_vertex_code();
  } else {
    clear_has_vertex_code();
  }
  vertex_code_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), vertex_code);
  // @@protoc_insertion_point(field_set_allocated:buffers.resources.Shader.vertex_code)
}

// optional string fragment_code = 6;
bool Shader::has_fragment_code() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void Shader::set_has_fragment_code() {
  _has_bits_[0] |= 0x00000004u;
}
void Shader::clear_has_fragment_code() {
  _has_bits_[0] &= ~0x00000004u;
}
void Shader::clear_fragment_code() {
  fragment_code_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_fragment_code();
}
const ::std::string& Shader::fragment_code() const {
  // @@protoc_insertion_point(field_get:buffers.resources.Shader.fragment_code)
  return fragment_code_.GetNoArena();
}
void Shader::set_fragment_code(const ::std::string& value) {
  set_has_fragment_code();
  fragment_code_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:buffers.resources.Shader.fragment_code)
}
#if LANG_CXX11
void Shader::set_fragment_code(::std::string&& value) {
  set_has_fragment_code();
  fragment_code_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:buffers.resources.Shader.fragment_code)
}
#endif
void Shader::set_fragment_code(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_fragment_code();
  fragment_code_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:buffers.resources.Shader.fragment_code)
}
void Shader::set_fragment_code(const char* value, size_t size) {
  set_has_fragment_code();
  fragment_code_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:buffers.resources.Shader.fragment_code)
}
::std::string* Shader::mutable_fragment_code() {
  set_has_fragment_code();
  // @@protoc_insertion_point(field_mutable:buffers.resources.Shader.fragment_code)
  return fragment_code_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* Shader::release_fragment_code() {
  // @@protoc_insertion_point(field_release:buffers.resources.Shader.fragment_code)
  clear_has_fragment_code();
  return fragment_code_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Shader::set_allocated_fragment_code(::std::string* fragment_code) {
  if (fragment_code != NULL) {
    set_has_fragment_code();
  } else {
    clear_has_fragment_code();
  }
  fragment_code_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), fragment_code);
  // @@protoc_insertion_point(field_set_allocated:buffers.resources.Shader.fragment_code)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace resources
}  // namespace buffers

// @@protoc_insertion_point(global_scope)
