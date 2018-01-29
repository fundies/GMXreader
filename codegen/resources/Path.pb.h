// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: resources/Path.proto

#ifndef PROTOBUF_resources_2fPath_2eproto__INCLUDED
#define PROTOBUF_resources_2fPath_2eproto__INCLUDED

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

namespace protobuf_resources_2fPath_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[3];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsPath_PointImpl();
void InitDefaultsPath_Point();
void InitDefaultsPath_EditorMetadataImpl();
void InitDefaultsPath_EditorMetadata();
void InitDefaultsPathImpl();
void InitDefaultsPath();
inline void InitDefaults() {
  InitDefaultsPath_Point();
  InitDefaultsPath_EditorMetadata();
  InitDefaultsPath();
}
}  // namespace protobuf_resources_2fPath_2eproto
namespace buffers {
namespace resources {
class Path;
class PathDefaultTypeInternal;
extern PathDefaultTypeInternal _Path_default_instance_;
class Path_EditorMetadata;
class Path_EditorMetadataDefaultTypeInternal;
extern Path_EditorMetadataDefaultTypeInternal _Path_EditorMetadata_default_instance_;
class Path_Point;
class Path_PointDefaultTypeInternal;
extern Path_PointDefaultTypeInternal _Path_Point_default_instance_;
}  // namespace resources
}  // namespace buffers
namespace buffers {
namespace resources {

// ===================================================================

class Path_Point : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:buffers.resources.Path.Point) */ {
 public:
  Path_Point();
  virtual ~Path_Point();

  Path_Point(const Path_Point& from);

  inline Path_Point& operator=(const Path_Point& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Path_Point(Path_Point&& from) noexcept
    : Path_Point() {
    *this = ::std::move(from);
  }

  inline Path_Point& operator=(Path_Point&& from) noexcept {
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
  static const Path_Point& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Path_Point* internal_default_instance() {
    return reinterpret_cast<const Path_Point*>(
               &_Path_Point_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Path_Point* other);
  friend void swap(Path_Point& a, Path_Point& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Path_Point* New() const PROTOBUF_FINAL { return New(NULL); }

  Path_Point* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Path_Point& from);
  void MergeFrom(const Path_Point& from);
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
  void InternalSwap(Path_Point* other);
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

  // optional int32 x = 1;
  bool has_x() const;
  void clear_x();
  static const int kXFieldNumber = 1;
  ::google::protobuf::int32 x() const;
  void set_x(::google::protobuf::int32 value);

  // optional int32 y = 2;
  bool has_y() const;
  void clear_y();
  static const int kYFieldNumber = 2;
  ::google::protobuf::int32 y() const;
  void set_y(::google::protobuf::int32 value);

  // optional int32 speed = 3;
  bool has_speed() const;
  void clear_speed();
  static const int kSpeedFieldNumber = 3;
  ::google::protobuf::int32 speed() const;
  void set_speed(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:buffers.resources.Path.Point)
 private:
  void set_has_x();
  void clear_has_x();
  void set_has_y();
  void clear_has_y();
  void set_has_speed();
  void clear_has_speed();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::int32 x_;
  ::google::protobuf::int32 y_;
  ::google::protobuf::int32 speed_;
  friend struct ::protobuf_resources_2fPath_2eproto::TableStruct;
  friend void ::protobuf_resources_2fPath_2eproto::InitDefaultsPath_PointImpl();
};
// -------------------------------------------------------------------

class Path_EditorMetadata : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:buffers.resources.Path.EditorMetadata) */ {
 public:
  Path_EditorMetadata();
  virtual ~Path_EditorMetadata();

  Path_EditorMetadata(const Path_EditorMetadata& from);

  inline Path_EditorMetadata& operator=(const Path_EditorMetadata& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Path_EditorMetadata(Path_EditorMetadata&& from) noexcept
    : Path_EditorMetadata() {
    *this = ::std::move(from);
  }

  inline Path_EditorMetadata& operator=(Path_EditorMetadata&& from) noexcept {
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
  static const Path_EditorMetadata& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Path_EditorMetadata* internal_default_instance() {
    return reinterpret_cast<const Path_EditorMetadata*>(
               &_Path_EditorMetadata_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(Path_EditorMetadata* other);
  friend void swap(Path_EditorMetadata& a, Path_EditorMetadata& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Path_EditorMetadata* New() const PROTOBUF_FINAL { return New(NULL); }

  Path_EditorMetadata* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Path_EditorMetadata& from);
  void MergeFrom(const Path_EditorMetadata& from);
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
  void InternalSwap(Path_EditorMetadata* other);
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

  // optional string background_room_name = 1;
  bool has_background_room_name() const;
  void clear_background_room_name();
  static const int kBackgroundRoomNameFieldNumber = 1;
  const ::std::string& background_room_name() const;
  void set_background_room_name(const ::std::string& value);
  #if LANG_CXX11
  void set_background_room_name(::std::string&& value);
  #endif
  void set_background_room_name(const char* value);
  void set_background_room_name(const char* value, size_t size);
  ::std::string* mutable_background_room_name();
  ::std::string* release_background_room_name();
  void set_allocated_background_room_name(::std::string* background_room_name);

  // optional int32 snap_x = 2;
  bool has_snap_x() const;
  void clear_snap_x();
  static const int kSnapXFieldNumber = 2;
  ::google::protobuf::int32 snap_x() const;
  void set_snap_x(::google::protobuf::int32 value);

  // optional int32 snap_y = 3;
  bool has_snap_y() const;
  void clear_snap_y();
  static const int kSnapYFieldNumber = 3;
  ::google::protobuf::int32 snap_y() const;
  void set_snap_y(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:buffers.resources.Path.EditorMetadata)
 private:
  void set_has_background_room_name();
  void clear_has_background_room_name();
  void set_has_snap_x();
  void clear_has_snap_x();
  void set_has_snap_y();
  void clear_has_snap_y();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr background_room_name_;
  ::google::protobuf::int32 snap_x_;
  ::google::protobuf::int32 snap_y_;
  friend struct ::protobuf_resources_2fPath_2eproto::TableStruct;
  friend void ::protobuf_resources_2fPath_2eproto::InitDefaultsPath_EditorMetadataImpl();
};
// -------------------------------------------------------------------

class Path : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:buffers.resources.Path) */ {
 public:
  Path();
  virtual ~Path();

  Path(const Path& from);

  inline Path& operator=(const Path& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Path(Path&& from) noexcept
    : Path() {
    *this = ::std::move(from);
  }

  inline Path& operator=(Path&& from) noexcept {
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
  static const Path& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Path* internal_default_instance() {
    return reinterpret_cast<const Path*>(
               &_Path_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(Path* other);
  friend void swap(Path& a, Path& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Path* New() const PROTOBUF_FINAL { return New(NULL); }

  Path* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Path& from);
  void MergeFrom(const Path& from);
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
  void InternalSwap(Path* other);
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

  typedef Path_Point Point;
  typedef Path_EditorMetadata EditorMetadata;

  // accessors -------------------------------------------------------

  // repeated .buffers.resources.Path.Point points = 7;
  int points_size() const;
  void clear_points();
  static const int kPointsFieldNumber = 7;
  const ::buffers::resources::Path_Point& points(int index) const;
  ::buffers::resources::Path_Point* mutable_points(int index);
  ::buffers::resources::Path_Point* add_points();
  ::google::protobuf::RepeatedPtrField< ::buffers::resources::Path_Point >*
      mutable_points();
  const ::google::protobuf::RepeatedPtrField< ::buffers::resources::Path_Point >&
      points() const;

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

  // optional .buffers.resources.Path.EditorMetadata editor_metadata = 3;
  bool has_editor_metadata() const;
  void clear_editor_metadata();
  static const int kEditorMetadataFieldNumber = 3;
  const ::buffers::resources::Path_EditorMetadata& editor_metadata() const;
  ::buffers::resources::Path_EditorMetadata* release_editor_metadata();
  ::buffers::resources::Path_EditorMetadata* mutable_editor_metadata();
  void set_allocated_editor_metadata(::buffers::resources::Path_EditorMetadata* editor_metadata);

  // optional int32 id = 2;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 2;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // optional bool smooth = 4;
  bool has_smooth() const;
  void clear_smooth();
  static const int kSmoothFieldNumber = 4;
  bool smooth() const;
  void set_smooth(bool value);

  // optional bool closed = 5;
  bool has_closed() const;
  void clear_closed();
  static const int kClosedFieldNumber = 5;
  bool closed() const;
  void set_closed(bool value);

  // optional int32 precision = 6;
  bool has_precision() const;
  void clear_precision();
  static const int kPrecisionFieldNumber = 6;
  ::google::protobuf::int32 precision() const;
  void set_precision(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:buffers.resources.Path)
 private:
  void set_has_name();
  void clear_has_name();
  void set_has_id();
  void clear_has_id();
  void set_has_editor_metadata();
  void clear_has_editor_metadata();
  void set_has_smooth();
  void clear_has_smooth();
  void set_has_closed();
  void clear_has_closed();
  void set_has_precision();
  void clear_has_precision();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::buffers::resources::Path_Point > points_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::buffers::resources::Path_EditorMetadata* editor_metadata_;
  ::google::protobuf::int32 id_;
  bool smooth_;
  bool closed_;
  ::google::protobuf::int32 precision_;
  friend struct ::protobuf_resources_2fPath_2eproto::TableStruct;
  friend void ::protobuf_resources_2fPath_2eproto::InitDefaultsPathImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Path_Point

// optional int32 x = 1;
inline bool Path_Point::has_x() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Path_Point::set_has_x() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Path_Point::clear_has_x() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Path_Point::clear_x() {
  x_ = 0;
  clear_has_x();
}
inline ::google::protobuf::int32 Path_Point::x() const {
  // @@protoc_insertion_point(field_get:buffers.resources.Path.Point.x)
  return x_;
}
inline void Path_Point::set_x(::google::protobuf::int32 value) {
  set_has_x();
  x_ = value;
  // @@protoc_insertion_point(field_set:buffers.resources.Path.Point.x)
}

// optional int32 y = 2;
inline bool Path_Point::has_y() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Path_Point::set_has_y() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Path_Point::clear_has_y() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Path_Point::clear_y() {
  y_ = 0;
  clear_has_y();
}
inline ::google::protobuf::int32 Path_Point::y() const {
  // @@protoc_insertion_point(field_get:buffers.resources.Path.Point.y)
  return y_;
}
inline void Path_Point::set_y(::google::protobuf::int32 value) {
  set_has_y();
  y_ = value;
  // @@protoc_insertion_point(field_set:buffers.resources.Path.Point.y)
}

// optional int32 speed = 3;
inline bool Path_Point::has_speed() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Path_Point::set_has_speed() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Path_Point::clear_has_speed() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Path_Point::clear_speed() {
  speed_ = 0;
  clear_has_speed();
}
inline ::google::protobuf::int32 Path_Point::speed() const {
  // @@protoc_insertion_point(field_get:buffers.resources.Path.Point.speed)
  return speed_;
}
inline void Path_Point::set_speed(::google::protobuf::int32 value) {
  set_has_speed();
  speed_ = value;
  // @@protoc_insertion_point(field_set:buffers.resources.Path.Point.speed)
}

// -------------------------------------------------------------------

// Path_EditorMetadata

// optional string background_room_name = 1;
inline bool Path_EditorMetadata::has_background_room_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Path_EditorMetadata::set_has_background_room_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Path_EditorMetadata::clear_has_background_room_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Path_EditorMetadata::clear_background_room_name() {
  background_room_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_background_room_name();
}
inline const ::std::string& Path_EditorMetadata::background_room_name() const {
  // @@protoc_insertion_point(field_get:buffers.resources.Path.EditorMetadata.background_room_name)
  return background_room_name_.GetNoArena();
}
inline void Path_EditorMetadata::set_background_room_name(const ::std::string& value) {
  set_has_background_room_name();
  background_room_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:buffers.resources.Path.EditorMetadata.background_room_name)
}
#if LANG_CXX11
inline void Path_EditorMetadata::set_background_room_name(::std::string&& value) {
  set_has_background_room_name();
  background_room_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:buffers.resources.Path.EditorMetadata.background_room_name)
}
#endif
inline void Path_EditorMetadata::set_background_room_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_background_room_name();
  background_room_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:buffers.resources.Path.EditorMetadata.background_room_name)
}
inline void Path_EditorMetadata::set_background_room_name(const char* value, size_t size) {
  set_has_background_room_name();
  background_room_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:buffers.resources.Path.EditorMetadata.background_room_name)
}
inline ::std::string* Path_EditorMetadata::mutable_background_room_name() {
  set_has_background_room_name();
  // @@protoc_insertion_point(field_mutable:buffers.resources.Path.EditorMetadata.background_room_name)
  return background_room_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Path_EditorMetadata::release_background_room_name() {
  // @@protoc_insertion_point(field_release:buffers.resources.Path.EditorMetadata.background_room_name)
  clear_has_background_room_name();
  return background_room_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Path_EditorMetadata::set_allocated_background_room_name(::std::string* background_room_name) {
  if (background_room_name != NULL) {
    set_has_background_room_name();
  } else {
    clear_has_background_room_name();
  }
  background_room_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), background_room_name);
  // @@protoc_insertion_point(field_set_allocated:buffers.resources.Path.EditorMetadata.background_room_name)
}

// optional int32 snap_x = 2;
inline bool Path_EditorMetadata::has_snap_x() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Path_EditorMetadata::set_has_snap_x() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Path_EditorMetadata::clear_has_snap_x() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Path_EditorMetadata::clear_snap_x() {
  snap_x_ = 0;
  clear_has_snap_x();
}
inline ::google::protobuf::int32 Path_EditorMetadata::snap_x() const {
  // @@protoc_insertion_point(field_get:buffers.resources.Path.EditorMetadata.snap_x)
  return snap_x_;
}
inline void Path_EditorMetadata::set_snap_x(::google::protobuf::int32 value) {
  set_has_snap_x();
  snap_x_ = value;
  // @@protoc_insertion_point(field_set:buffers.resources.Path.EditorMetadata.snap_x)
}

// optional int32 snap_y = 3;
inline bool Path_EditorMetadata::has_snap_y() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Path_EditorMetadata::set_has_snap_y() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Path_EditorMetadata::clear_has_snap_y() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Path_EditorMetadata::clear_snap_y() {
  snap_y_ = 0;
  clear_has_snap_y();
}
inline ::google::protobuf::int32 Path_EditorMetadata::snap_y() const {
  // @@protoc_insertion_point(field_get:buffers.resources.Path.EditorMetadata.snap_y)
  return snap_y_;
}
inline void Path_EditorMetadata::set_snap_y(::google::protobuf::int32 value) {
  set_has_snap_y();
  snap_y_ = value;
  // @@protoc_insertion_point(field_set:buffers.resources.Path.EditorMetadata.snap_y)
}

// -------------------------------------------------------------------

// Path

// optional string name = 1;
inline bool Path::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Path::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Path::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Path::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name();
}
inline const ::std::string& Path::name() const {
  // @@protoc_insertion_point(field_get:buffers.resources.Path.name)
  return name_.GetNoArena();
}
inline void Path::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:buffers.resources.Path.name)
}
#if LANG_CXX11
inline void Path::set_name(::std::string&& value) {
  set_has_name();
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:buffers.resources.Path.name)
}
#endif
inline void Path::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:buffers.resources.Path.name)
}
inline void Path::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:buffers.resources.Path.name)
}
inline ::std::string* Path::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:buffers.resources.Path.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Path::release_name() {
  // @@protoc_insertion_point(field_release:buffers.resources.Path.name)
  clear_has_name();
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Path::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:buffers.resources.Path.name)
}

// optional int32 id = 2;
inline bool Path::has_id() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Path::set_has_id() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Path::clear_has_id() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Path::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 Path::id() const {
  // @@protoc_insertion_point(field_get:buffers.resources.Path.id)
  return id_;
}
inline void Path::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:buffers.resources.Path.id)
}

// optional .buffers.resources.Path.EditorMetadata editor_metadata = 3;
inline bool Path::has_editor_metadata() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Path::set_has_editor_metadata() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Path::clear_has_editor_metadata() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Path::clear_editor_metadata() {
  if (editor_metadata_ != NULL) editor_metadata_->Clear();
  clear_has_editor_metadata();
}
inline const ::buffers::resources::Path_EditorMetadata& Path::editor_metadata() const {
  const ::buffers::resources::Path_EditorMetadata* p = editor_metadata_;
  // @@protoc_insertion_point(field_get:buffers.resources.Path.editor_metadata)
  return p != NULL ? *p : *reinterpret_cast<const ::buffers::resources::Path_EditorMetadata*>(
      &::buffers::resources::_Path_EditorMetadata_default_instance_);
}
inline ::buffers::resources::Path_EditorMetadata* Path::release_editor_metadata() {
  // @@protoc_insertion_point(field_release:buffers.resources.Path.editor_metadata)
  clear_has_editor_metadata();
  ::buffers::resources::Path_EditorMetadata* temp = editor_metadata_;
  editor_metadata_ = NULL;
  return temp;
}
inline ::buffers::resources::Path_EditorMetadata* Path::mutable_editor_metadata() {
  set_has_editor_metadata();
  if (editor_metadata_ == NULL) {
    editor_metadata_ = new ::buffers::resources::Path_EditorMetadata;
  }
  // @@protoc_insertion_point(field_mutable:buffers.resources.Path.editor_metadata)
  return editor_metadata_;
}
inline void Path::set_allocated_editor_metadata(::buffers::resources::Path_EditorMetadata* editor_metadata) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete editor_metadata_;
  }
  if (editor_metadata) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      editor_metadata = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, editor_metadata, submessage_arena);
    }
    set_has_editor_metadata();
  } else {
    clear_has_editor_metadata();
  }
  editor_metadata_ = editor_metadata;
  // @@protoc_insertion_point(field_set_allocated:buffers.resources.Path.editor_metadata)
}

// optional bool smooth = 4;
inline bool Path::has_smooth() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Path::set_has_smooth() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Path::clear_has_smooth() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Path::clear_smooth() {
  smooth_ = false;
  clear_has_smooth();
}
inline bool Path::smooth() const {
  // @@protoc_insertion_point(field_get:buffers.resources.Path.smooth)
  return smooth_;
}
inline void Path::set_smooth(bool value) {
  set_has_smooth();
  smooth_ = value;
  // @@protoc_insertion_point(field_set:buffers.resources.Path.smooth)
}

// optional bool closed = 5;
inline bool Path::has_closed() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Path::set_has_closed() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Path::clear_has_closed() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Path::clear_closed() {
  closed_ = false;
  clear_has_closed();
}
inline bool Path::closed() const {
  // @@protoc_insertion_point(field_get:buffers.resources.Path.closed)
  return closed_;
}
inline void Path::set_closed(bool value) {
  set_has_closed();
  closed_ = value;
  // @@protoc_insertion_point(field_set:buffers.resources.Path.closed)
}

// optional int32 precision = 6;
inline bool Path::has_precision() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Path::set_has_precision() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Path::clear_has_precision() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Path::clear_precision() {
  precision_ = 0;
  clear_has_precision();
}
inline ::google::protobuf::int32 Path::precision() const {
  // @@protoc_insertion_point(field_get:buffers.resources.Path.precision)
  return precision_;
}
inline void Path::set_precision(::google::protobuf::int32 value) {
  set_has_precision();
  precision_ = value;
  // @@protoc_insertion_point(field_set:buffers.resources.Path.precision)
}

// repeated .buffers.resources.Path.Point points = 7;
inline int Path::points_size() const {
  return points_.size();
}
inline void Path::clear_points() {
  points_.Clear();
}
inline const ::buffers::resources::Path_Point& Path::points(int index) const {
  // @@protoc_insertion_point(field_get:buffers.resources.Path.points)
  return points_.Get(index);
}
inline ::buffers::resources::Path_Point* Path::mutable_points(int index) {
  // @@protoc_insertion_point(field_mutable:buffers.resources.Path.points)
  return points_.Mutable(index);
}
inline ::buffers::resources::Path_Point* Path::add_points() {
  // @@protoc_insertion_point(field_add:buffers.resources.Path.points)
  return points_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::buffers::resources::Path_Point >*
Path::mutable_points() {
  // @@protoc_insertion_point(field_mutable_list:buffers.resources.Path.points)
  return &points_;
}
inline const ::google::protobuf::RepeatedPtrField< ::buffers::resources::Path_Point >&
Path::points() const {
  // @@protoc_insertion_point(field_list:buffers.resources.Path.points)
  return points_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace resources
}  // namespace buffers

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_resources_2fPath_2eproto__INCLUDED
