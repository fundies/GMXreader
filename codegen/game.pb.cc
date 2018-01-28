// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: game.proto

#include "game.pb.h"

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
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace buffers {
class ProjectDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Project>
      _instance;
} _Project_default_instance_;
}  // namespace buffers
namespace protobuf_game_2eproto {
void InitDefaultsProjectImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_resources_2fBackground_2eproto::InitDefaultsBackground();
  {
    void* ptr = &::buffers::_Project_default_instance_;
    new (ptr) ::buffers::Project();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::buffers::Project::InitAsDefaultInstance();
}

void InitDefaultsProject() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsProjectImpl);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::buffers::Project, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::buffers::Project, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::buffers::Project, backgrounds_),
  ~0u,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 6, sizeof(::buffers::Project)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::buffers::_Project_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "game.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\ngame.proto\022\007buffers\032\032resources/Backgro"
      "und.proto\"=\n\007Project\0222\n\013backgrounds\030\001 \003("
      "\0132\035.buffers.resources.Background"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 112);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "game.proto", &protobuf_RegisterTypes);
  ::protobuf_resources_2fBackground_2eproto::AddDescriptors();
}

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
}  // namespace protobuf_game_2eproto
namespace buffers {

// ===================================================================

void Project::InitAsDefaultInstance() {
}
void Project::clear_backgrounds() {
  backgrounds_.Clear();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Project::kBackgroundsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Project::Project()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_game_2eproto::InitDefaultsProject();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:buffers.Project)
}
Project::Project(const Project& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0),
      backgrounds_(from.backgrounds_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:buffers.Project)
}

void Project::SharedCtor() {
  _cached_size_ = 0;
}

Project::~Project() {
  // @@protoc_insertion_point(destructor:buffers.Project)
  SharedDtor();
}

void Project::SharedDtor() {
}

void Project::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Project::descriptor() {
  ::protobuf_game_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_game_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Project& Project::default_instance() {
  ::protobuf_game_2eproto::InitDefaultsProject();
  return *internal_default_instance();
}

Project* Project::New(::google::protobuf::Arena* arena) const {
  Project* n = new Project;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Project::Clear() {
// @@protoc_insertion_point(message_clear_start:buffers.Project)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  backgrounds_.Clear();
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool Project::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:buffers.Project)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .buffers.resources.Background backgrounds = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_backgrounds()));
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
  // @@protoc_insertion_point(parse_success:buffers.Project)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:buffers.Project)
  return false;
#undef DO_
}

void Project::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:buffers.Project)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .buffers.resources.Background backgrounds = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->backgrounds_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->backgrounds(static_cast<int>(i)), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:buffers.Project)
}

::google::protobuf::uint8* Project::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:buffers.Project)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .buffers.resources.Background backgrounds = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->backgrounds_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->backgrounds(static_cast<int>(i)), deterministic, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:buffers.Project)
  return target;
}

size_t Project::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:buffers.Project)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  // repeated .buffers.resources.Background backgrounds = 1;
  {
    unsigned int count = static_cast<unsigned int>(this->backgrounds_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->backgrounds(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Project::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:buffers.Project)
  GOOGLE_DCHECK_NE(&from, this);
  const Project* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Project>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:buffers.Project)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:buffers.Project)
    MergeFrom(*source);
  }
}

void Project::MergeFrom(const Project& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:buffers.Project)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  backgrounds_.MergeFrom(from.backgrounds_);
}

void Project::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:buffers.Project)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Project::CopyFrom(const Project& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:buffers.Project)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Project::IsInitialized() const {
  return true;
}

void Project::Swap(Project* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Project::InternalSwap(Project* other) {
  using std::swap;
  backgrounds_.InternalSwap(&other->backgrounds_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Project::GetMetadata() const {
  protobuf_game_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_game_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace buffers

// @@protoc_insertion_point(global_scope)