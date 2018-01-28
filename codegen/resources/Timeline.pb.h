// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: resources/Timeline.proto

#ifndef PROTOBUF_resources_2fTimeline_2eproto__INCLUDED
#define PROTOBUF_resources_2fTimeline_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "options.pb.h"
// @@protoc_insertion_point(includes)

namespace protobuf_resources_2fTimeline_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsTimeline_MomentImpl();
void InitDefaultsTimeline_Moment();
void InitDefaultsTimelineImpl();
void InitDefaultsTimeline();
inline void InitDefaults() {
  InitDefaultsTimeline_Moment();
  InitDefaultsTimeline();
}
}  // namespace protobuf_resources_2fTimeline_2eproto
namespace buffers {
namespace resources {
class Timeline;
class TimelineDefaultTypeInternal;
extern TimelineDefaultTypeInternal _Timeline_default_instance_;
class Timeline_Moment;
class Timeline_MomentDefaultTypeInternal;
extern Timeline_MomentDefaultTypeInternal _Timeline_Moment_default_instance_;
}  // namespace resources
}  // namespace buffers
namespace buffers {
namespace resources {

// ===================================================================

class Timeline_Moment : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:buffers.resources.Timeline.Moment) */ {
 public:
  Timeline_Moment();
  virtual ~Timeline_Moment();

  Timeline_Moment(const Timeline_Moment& from);

  inline Timeline_Moment& operator=(const Timeline_Moment& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Timeline_Moment(Timeline_Moment&& from) noexcept
    : Timeline_Moment() {
    *this = ::std::move(from);
  }

  inline Timeline_Moment& operator=(Timeline_Moment&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Timeline_Moment& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Timeline_Moment* internal_default_instance() {
    return reinterpret_cast<const Timeline_Moment*>(
               &_Timeline_Moment_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Timeline_Moment* other);
  friend void swap(Timeline_Moment& a, Timeline_Moment& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Timeline_Moment* New() const PROTOBUF_FINAL { return New(NULL); }

  Timeline_Moment* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Timeline_Moment& from);
  void MergeFrom(const Timeline_Moment& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Timeline_Moment* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string code = 2;
  bool has_code() const;
  void clear_code();
  static const int kCodeFieldNumber = 2;
  const ::std::string& code() const;
  void set_code(const ::std::string& value);
  #if LANG_CXX11
  void set_code(::std::string&& value);
  #endif
  void set_code(const char* value);
  void set_code(const char* value, size_t size);
  ::std::string* mutable_code();
  ::std::string* release_code();
  void set_allocated_code(::std::string* code);

  // optional int32 step = 1;
  bool has_step() const;
  void clear_step();
  static const int kStepFieldNumber = 1;
  ::google::protobuf::int32 step() const;
  void set_step(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:buffers.resources.Timeline.Moment)
 private:
  void set_has_step();
  void clear_has_step();
  void set_has_code();
  void clear_has_code();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr code_;
  ::google::protobuf::int32 step_;
  friend struct ::protobuf_resources_2fTimeline_2eproto::TableStruct;
  friend void ::protobuf_resources_2fTimeline_2eproto::InitDefaultsTimeline_MomentImpl();
};
// -------------------------------------------------------------------

class Timeline : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:buffers.resources.Timeline) */ {
 public:
  Timeline();
  virtual ~Timeline();

  Timeline(const Timeline& from);

  inline Timeline& operator=(const Timeline& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Timeline(Timeline&& from) noexcept
    : Timeline() {
    *this = ::std::move(from);
  }

  inline Timeline& operator=(Timeline&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Timeline& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Timeline* internal_default_instance() {
    return reinterpret_cast<const Timeline*>(
               &_Timeline_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(Timeline* other);
  friend void swap(Timeline& a, Timeline& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Timeline* New() const PROTOBUF_FINAL { return New(NULL); }

  Timeline* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Timeline& from);
  void MergeFrom(const Timeline& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Timeline* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  typedef Timeline_Moment Moment;

  // accessors -------------------------------------------------------

  // repeated .buffers.resources.Timeline.Moment moments = 3;
  int moments_size() const;
  void clear_moments();
  static const int kMomentsFieldNumber = 3;
  const ::buffers::resources::Timeline_Moment& moments(int index) const;
  ::buffers::resources::Timeline_Moment* mutable_moments(int index);
  ::buffers::resources::Timeline_Moment* add_moments();
  ::google::protobuf::RepeatedPtrField< ::buffers::resources::Timeline_Moment >*
      mutable_moments();
  const ::google::protobuf::RepeatedPtrField< ::buffers::resources::Timeline_Moment >&
      moments() const;

  // optional string name = 1;
  bool has_name() const;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // optional int32 id = 2;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 2;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:buffers.resources.Timeline)
 private:
  void set_has_name();
  void clear_has_name();
  void set_has_id();
  void clear_has_id();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::buffers::resources::Timeline_Moment > moments_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::int32 id_;
  friend struct ::protobuf_resources_2fTimeline_2eproto::TableStruct;
  friend void ::protobuf_resources_2fTimeline_2eproto::InitDefaultsTimelineImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Timeline_Moment

// optional int32 step = 1;
inline bool Timeline_Moment::has_step() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Timeline_Moment::set_has_step() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Timeline_Moment::clear_has_step() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Timeline_Moment::clear_step() {
  step_ = 0;
  clear_has_step();
}
inline ::google::protobuf::int32 Timeline_Moment::step() const {
  // @@protoc_insertion_point(field_get:buffers.resources.Timeline.Moment.step)
  return step_;
}
inline void Timeline_Moment::set_step(::google::protobuf::int32 value) {
  set_has_step();
  step_ = value;
  // @@protoc_insertion_point(field_set:buffers.resources.Timeline.Moment.step)
}

// optional string code = 2;
inline bool Timeline_Moment::has_code() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Timeline_Moment::set_has_code() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Timeline_Moment::clear_has_code() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Timeline_Moment::clear_code() {
  code_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_code();
}
inline const ::std::string& Timeline_Moment::code() const {
  // @@protoc_insertion_point(field_get:buffers.resources.Timeline.Moment.code)
  return code_.GetNoArena();
}
inline void Timeline_Moment::set_code(const ::std::string& value) {
  set_has_code();
  code_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:buffers.resources.Timeline.Moment.code)
}
#if LANG_CXX11
inline void Timeline_Moment::set_code(::std::string&& value) {
  set_has_code();
  code_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:buffers.resources.Timeline.Moment.code)
}
#endif
inline void Timeline_Moment::set_code(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_code();
  code_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:buffers.resources.Timeline.Moment.code)
}
inline void Timeline_Moment::set_code(const char* value, size_t size) {
  set_has_code();
  code_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:buffers.resources.Timeline.Moment.code)
}
inline ::std::string* Timeline_Moment::mutable_code() {
  set_has_code();
  // @@protoc_insertion_point(field_mutable:buffers.resources.Timeline.Moment.code)
  return code_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Timeline_Moment::release_code() {
  // @@protoc_insertion_point(field_release:buffers.resources.Timeline.Moment.code)
  clear_has_code();
  return code_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Timeline_Moment::set_allocated_code(::std::string* code) {
  if (code != NULL) {
    set_has_code();
  } else {
    clear_has_code();
  }
  code_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), code);
  // @@protoc_insertion_point(field_set_allocated:buffers.resources.Timeline.Moment.code)
}

// -------------------------------------------------------------------

// Timeline

// optional string name = 1;
inline bool Timeline::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Timeline::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Timeline::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Timeline::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name();
}
inline const ::std::string& Timeline::name() const {
  // @@protoc_insertion_point(field_get:buffers.resources.Timeline.name)
  return name_.GetNoArena();
}
inline void Timeline::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:buffers.resources.Timeline.name)
}
#if LANG_CXX11
inline void Timeline::set_name(::std::string&& value) {
  set_has_name();
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:buffers.resources.Timeline.name)
}
#endif
inline void Timeline::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:buffers.resources.Timeline.name)
}
inline void Timeline::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:buffers.resources.Timeline.name)
}
inline ::std::string* Timeline::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:buffers.resources.Timeline.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Timeline::release_name() {
  // @@protoc_insertion_point(field_release:buffers.resources.Timeline.name)
  clear_has_name();
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Timeline::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:buffers.resources.Timeline.name)
}

// optional int32 id = 2;
inline bool Timeline::has_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Timeline::set_has_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Timeline::clear_has_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Timeline::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 Timeline::id() const {
  // @@protoc_insertion_point(field_get:buffers.resources.Timeline.id)
  return id_;
}
inline void Timeline::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:buffers.resources.Timeline.id)
}

// repeated .buffers.resources.Timeline.Moment moments = 3;
inline int Timeline::moments_size() const {
  return moments_.size();
}
inline void Timeline::clear_moments() {
  moments_.Clear();
}
inline const ::buffers::resources::Timeline_Moment& Timeline::moments(int index) const {
  // @@protoc_insertion_point(field_get:buffers.resources.Timeline.moments)
  return moments_.Get(index);
}
inline ::buffers::resources::Timeline_Moment* Timeline::mutable_moments(int index) {
  // @@protoc_insertion_point(field_mutable:buffers.resources.Timeline.moments)
  return moments_.Mutable(index);
}
inline ::buffers::resources::Timeline_Moment* Timeline::add_moments() {
  // @@protoc_insertion_point(field_add:buffers.resources.Timeline.moments)
  return moments_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::buffers::resources::Timeline_Moment >*
Timeline::mutable_moments() {
  // @@protoc_insertion_point(field_mutable_list:buffers.resources.Timeline.moments)
  return &moments_;
}
inline const ::google::protobuf::RepeatedPtrField< ::buffers::resources::Timeline_Moment >&
Timeline::moments() const {
  // @@protoc_insertion_point(field_list:buffers.resources.Timeline.moments)
  return moments_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace resources
}  // namespace buffers

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_resources_2fTimeline_2eproto__INCLUDED
