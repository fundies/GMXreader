// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: game.proto

#ifndef PROTOBUF_game_2eproto__INCLUDED
#define PROTOBUF_game_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3004000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/descriptor.pb.h>
// @@protoc_insertion_point(includes)
namespace enigma {
namespace proto {
namespace resource {
class Background;
class BackgroundDefaultTypeInternal;
extern BackgroundDefaultTypeInternal _Background_default_instance_;
class Project;
class ProjectDefaultTypeInternal;
extern ProjectDefaultTypeInternal _Project_default_instance_;
}  // namespace resource
}  // namespace proto
}  // namespace enigma

namespace enigma {
namespace proto {
namespace resource {

namespace protobuf_game_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static void InitDefaultsImpl();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_game_2eproto

// ===================================================================

class Project : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:enigma.proto.resource.Project) */ {
 public:
  Project();
  virtual ~Project();

  Project(const Project& from);

  inline Project& operator=(const Project& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Project(Project&& from) noexcept
    : Project() {
    *this = ::std::move(from);
  }

  inline Project& operator=(Project&& from) noexcept {
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
  static const Project& default_instance();

  static inline const Project* internal_default_instance() {
    return reinterpret_cast<const Project*>(
               &_Project_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Project* other);
  friend void swap(Project& a, Project& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Project* New() const PROTOBUF_FINAL { return New(NULL); }

  Project* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Project& from);
  void MergeFrom(const Project& from);
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
  void InternalSwap(Project* other);
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

  // repeated .enigma.proto.resource.Background backgrounds = 1;
  int backgrounds_size() const;
  void clear_backgrounds();
  static const int kBackgroundsFieldNumber = 1;
  const ::enigma::proto::resource::Background& backgrounds(int index) const;
  ::enigma::proto::resource::Background* mutable_backgrounds(int index);
  ::enigma::proto::resource::Background* add_backgrounds();
  ::google::protobuf::RepeatedPtrField< ::enigma::proto::resource::Background >*
      mutable_backgrounds();
  const ::google::protobuf::RepeatedPtrField< ::enigma::proto::resource::Background >&
      backgrounds() const;

  // @@protoc_insertion_point(class_scope:enigma.proto.resource.Project)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::enigma::proto::resource::Background > backgrounds_;
  friend struct protobuf_game_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Background : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:enigma.proto.resource.Background) */ {
 public:
  Background();
  virtual ~Background();

  Background(const Background& from);

  inline Background& operator=(const Background& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Background(Background&& from) noexcept
    : Background() {
    *this = ::std::move(from);
  }

  inline Background& operator=(Background&& from) noexcept {
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
  static const Background& default_instance();

  static inline const Background* internal_default_instance() {
    return reinterpret_cast<const Background*>(
               &_Background_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(Background* other);
  friend void swap(Background& a, Background& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Background* New() const PROTOBUF_FINAL { return New(NULL); }

  Background* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Background& from);
  void MergeFrom(const Background& from);
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
  void InternalSwap(Background* other);
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

  // optional bool preload = 4;
  bool has_preload() const;
  void clear_preload();
  static const int kPreloadFieldNumber = 4;
  bool preload() const;
  void set_preload(bool value);

  // optional bool transparent = 5;
  bool has_transparent() const;
  void clear_transparent();
  static const int kTransparentFieldNumber = 5;
  bool transparent() const;
  void set_transparent(bool value);

  // optional bool smooth_edges = 6;
  bool has_smooth_edges() const;
  void clear_smooth_edges();
  static const int kSmoothEdgesFieldNumber = 6;
  bool smooth_edges() const;
  void set_smooth_edges(bool value);

  // optional bool use_as_tileset = 7 [(.enigma.proto.resource.gmx) = "istileset"];
  bool has_use_as_tileset() const;
  void clear_use_as_tileset();
  static const int kUseAsTilesetFieldNumber = 7;
  bool use_as_tileset() const;
  void set_use_as_tileset(bool value);

  // optional int32 tile_width = 11 [(.enigma.proto.resource.gmx) = "tilewidth"];
  bool has_tile_width() const;
  void clear_tile_width();
  static const int kTileWidthFieldNumber = 11;
  ::google::protobuf::int32 tile_width() const;
  void set_tile_width(::google::protobuf::int32 value);

  // optional int32 tile_height = 12 [(.enigma.proto.resource.gmx) = "tileheight"];
  bool has_tile_height() const;
  void clear_tile_height();
  static const int kTileHeightFieldNumber = 12;
  ::google::protobuf::int32 tile_height() const;
  void set_tile_height(::google::protobuf::int32 value);

  // optional int32 horizontal_offset = 13 [(.enigma.proto.resource.gmx) = "tilexoff"];
  bool has_horizontal_offset() const;
  void clear_horizontal_offset();
  static const int kHorizontalOffsetFieldNumber = 13;
  ::google::protobuf::int32 horizontal_offset() const;
  void set_horizontal_offset(::google::protobuf::int32 value);

  // optional int32 vertical_offset = 14 [(.enigma.proto.resource.gmx) = "tileyoff"];
  bool has_vertical_offset() const;
  void clear_vertical_offset();
  static const int kVerticalOffsetFieldNumber = 14;
  ::google::protobuf::int32 vertical_offset() const;
  void set_vertical_offset(::google::protobuf::int32 value);

  // optional int32 horizontal_spacing = 15 [(.enigma.proto.resource.gmx) = "tilehsep"];
  bool has_horizontal_spacing() const;
  void clear_horizontal_spacing();
  static const int kHorizontalSpacingFieldNumber = 15;
  ::google::protobuf::int32 horizontal_spacing() const;
  void set_horizontal_spacing(::google::protobuf::int32 value);

  // optional int32 vertical_spacing = 16 [(.enigma.proto.resource.gmx) = "tilevsep"];
  bool has_vertical_spacing() const;
  void clear_vertical_spacing();
  static const int kVerticalSpacingFieldNumber = 16;
  ::google::protobuf::int32 vertical_spacing() const;
  void set_vertical_spacing(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:enigma.proto.resource.Background)
 private:
  void set_has_name();
  void clear_has_name();
  void set_has_id();
  void clear_has_id();
  void set_has_preload();
  void clear_has_preload();
  void set_has_transparent();
  void clear_has_transparent();
  void set_has_smooth_edges();
  void clear_has_smooth_edges();
  void set_has_use_as_tileset();
  void clear_has_use_as_tileset();
  void set_has_tile_width();
  void clear_has_tile_width();
  void set_has_tile_height();
  void clear_has_tile_height();
  void set_has_horizontal_offset();
  void clear_has_horizontal_offset();
  void set_has_vertical_offset();
  void clear_has_vertical_offset();
  void set_has_horizontal_spacing();
  void clear_has_horizontal_spacing();
  void set_has_vertical_spacing();
  void clear_has_vertical_spacing();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::int32 id_;
  bool preload_;
  bool transparent_;
  bool smooth_edges_;
  bool use_as_tileset_;
  ::google::protobuf::int32 tile_width_;
  ::google::protobuf::int32 tile_height_;
  ::google::protobuf::int32 horizontal_offset_;
  ::google::protobuf::int32 vertical_offset_;
  ::google::protobuf::int32 horizontal_spacing_;
  ::google::protobuf::int32 vertical_spacing_;
  friend struct protobuf_game_2eproto::TableStruct;
};
// ===================================================================

static const int kGmxFieldNumber = 50000;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  gmx;

// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Project

// repeated .enigma.proto.resource.Background backgrounds = 1;
inline int Project::backgrounds_size() const {
  return backgrounds_.size();
}
inline void Project::clear_backgrounds() {
  backgrounds_.Clear();
}
inline const ::enigma::proto::resource::Background& Project::backgrounds(int index) const {
  // @@protoc_insertion_point(field_get:enigma.proto.resource.Project.backgrounds)
  return backgrounds_.Get(index);
}
inline ::enigma::proto::resource::Background* Project::mutable_backgrounds(int index) {
  // @@protoc_insertion_point(field_mutable:enigma.proto.resource.Project.backgrounds)
  return backgrounds_.Mutable(index);
}
inline ::enigma::proto::resource::Background* Project::add_backgrounds() {
  // @@protoc_insertion_point(field_add:enigma.proto.resource.Project.backgrounds)
  return backgrounds_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::enigma::proto::resource::Background >*
Project::mutable_backgrounds() {
  // @@protoc_insertion_point(field_mutable_list:enigma.proto.resource.Project.backgrounds)
  return &backgrounds_;
}
inline const ::google::protobuf::RepeatedPtrField< ::enigma::proto::resource::Background >&
Project::backgrounds() const {
  // @@protoc_insertion_point(field_list:enigma.proto.resource.Project.backgrounds)
  return backgrounds_;
}

// -------------------------------------------------------------------

// Background

// optional string name = 1;
inline bool Background::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Background::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Background::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Background::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name();
}
inline const ::std::string& Background::name() const {
  // @@protoc_insertion_point(field_get:enigma.proto.resource.Background.name)
  return name_.GetNoArena();
}
inline void Background::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:enigma.proto.resource.Background.name)
}
#if LANG_CXX11
inline void Background::set_name(::std::string&& value) {
  set_has_name();
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:enigma.proto.resource.Background.name)
}
#endif
inline void Background::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:enigma.proto.resource.Background.name)
}
inline void Background::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:enigma.proto.resource.Background.name)
}
inline ::std::string* Background::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:enigma.proto.resource.Background.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Background::release_name() {
  // @@protoc_insertion_point(field_release:enigma.proto.resource.Background.name)
  clear_has_name();
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Background::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:enigma.proto.resource.Background.name)
}

// optional int32 id = 2;
inline bool Background::has_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Background::set_has_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Background::clear_has_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Background::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 Background::id() const {
  // @@protoc_insertion_point(field_get:enigma.proto.resource.Background.id)
  return id_;
}
inline void Background::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:enigma.proto.resource.Background.id)
}

// optional bool preload = 4;
inline bool Background::has_preload() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Background::set_has_preload() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Background::clear_has_preload() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Background::clear_preload() {
  preload_ = false;
  clear_has_preload();
}
inline bool Background::preload() const {
  // @@protoc_insertion_point(field_get:enigma.proto.resource.Background.preload)
  return preload_;
}
inline void Background::set_preload(bool value) {
  set_has_preload();
  preload_ = value;
  // @@protoc_insertion_point(field_set:enigma.proto.resource.Background.preload)
}

// optional bool transparent = 5;
inline bool Background::has_transparent() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Background::set_has_transparent() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Background::clear_has_transparent() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Background::clear_transparent() {
  transparent_ = false;
  clear_has_transparent();
}
inline bool Background::transparent() const {
  // @@protoc_insertion_point(field_get:enigma.proto.resource.Background.transparent)
  return transparent_;
}
inline void Background::set_transparent(bool value) {
  set_has_transparent();
  transparent_ = value;
  // @@protoc_insertion_point(field_set:enigma.proto.resource.Background.transparent)
}

// optional bool smooth_edges = 6;
inline bool Background::has_smooth_edges() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Background::set_has_smooth_edges() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Background::clear_has_smooth_edges() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Background::clear_smooth_edges() {
  smooth_edges_ = false;
  clear_has_smooth_edges();
}
inline bool Background::smooth_edges() const {
  // @@protoc_insertion_point(field_get:enigma.proto.resource.Background.smooth_edges)
  return smooth_edges_;
}
inline void Background::set_smooth_edges(bool value) {
  set_has_smooth_edges();
  smooth_edges_ = value;
  // @@protoc_insertion_point(field_set:enigma.proto.resource.Background.smooth_edges)
}

// optional bool use_as_tileset = 7 [(.enigma.proto.resource.gmx) = "istileset"];
inline bool Background::has_use_as_tileset() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Background::set_has_use_as_tileset() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Background::clear_has_use_as_tileset() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Background::clear_use_as_tileset() {
  use_as_tileset_ = false;
  clear_has_use_as_tileset();
}
inline bool Background::use_as_tileset() const {
  // @@protoc_insertion_point(field_get:enigma.proto.resource.Background.use_as_tileset)
  return use_as_tileset_;
}
inline void Background::set_use_as_tileset(bool value) {
  set_has_use_as_tileset();
  use_as_tileset_ = value;
  // @@protoc_insertion_point(field_set:enigma.proto.resource.Background.use_as_tileset)
}

// optional int32 tile_width = 11 [(.enigma.proto.resource.gmx) = "tilewidth"];
inline bool Background::has_tile_width() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Background::set_has_tile_width() {
  _has_bits_[0] |= 0x00000040u;
}
inline void Background::clear_has_tile_width() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void Background::clear_tile_width() {
  tile_width_ = 0;
  clear_has_tile_width();
}
inline ::google::protobuf::int32 Background::tile_width() const {
  // @@protoc_insertion_point(field_get:enigma.proto.resource.Background.tile_width)
  return tile_width_;
}
inline void Background::set_tile_width(::google::protobuf::int32 value) {
  set_has_tile_width();
  tile_width_ = value;
  // @@protoc_insertion_point(field_set:enigma.proto.resource.Background.tile_width)
}

// optional int32 tile_height = 12 [(.enigma.proto.resource.gmx) = "tileheight"];
inline bool Background::has_tile_height() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void Background::set_has_tile_height() {
  _has_bits_[0] |= 0x00000080u;
}
inline void Background::clear_has_tile_height() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void Background::clear_tile_height() {
  tile_height_ = 0;
  clear_has_tile_height();
}
inline ::google::protobuf::int32 Background::tile_height() const {
  // @@protoc_insertion_point(field_get:enigma.proto.resource.Background.tile_height)
  return tile_height_;
}
inline void Background::set_tile_height(::google::protobuf::int32 value) {
  set_has_tile_height();
  tile_height_ = value;
  // @@protoc_insertion_point(field_set:enigma.proto.resource.Background.tile_height)
}

// optional int32 horizontal_offset = 13 [(.enigma.proto.resource.gmx) = "tilexoff"];
inline bool Background::has_horizontal_offset() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void Background::set_has_horizontal_offset() {
  _has_bits_[0] |= 0x00000100u;
}
inline void Background::clear_has_horizontal_offset() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void Background::clear_horizontal_offset() {
  horizontal_offset_ = 0;
  clear_has_horizontal_offset();
}
inline ::google::protobuf::int32 Background::horizontal_offset() const {
  // @@protoc_insertion_point(field_get:enigma.proto.resource.Background.horizontal_offset)
  return horizontal_offset_;
}
inline void Background::set_horizontal_offset(::google::protobuf::int32 value) {
  set_has_horizontal_offset();
  horizontal_offset_ = value;
  // @@protoc_insertion_point(field_set:enigma.proto.resource.Background.horizontal_offset)
}

// optional int32 vertical_offset = 14 [(.enigma.proto.resource.gmx) = "tileyoff"];
inline bool Background::has_vertical_offset() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void Background::set_has_vertical_offset() {
  _has_bits_[0] |= 0x00000200u;
}
inline void Background::clear_has_vertical_offset() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void Background::clear_vertical_offset() {
  vertical_offset_ = 0;
  clear_has_vertical_offset();
}
inline ::google::protobuf::int32 Background::vertical_offset() const {
  // @@protoc_insertion_point(field_get:enigma.proto.resource.Background.vertical_offset)
  return vertical_offset_;
}
inline void Background::set_vertical_offset(::google::protobuf::int32 value) {
  set_has_vertical_offset();
  vertical_offset_ = value;
  // @@protoc_insertion_point(field_set:enigma.proto.resource.Background.vertical_offset)
}

// optional int32 horizontal_spacing = 15 [(.enigma.proto.resource.gmx) = "tilehsep"];
inline bool Background::has_horizontal_spacing() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void Background::set_has_horizontal_spacing() {
  _has_bits_[0] |= 0x00000400u;
}
inline void Background::clear_has_horizontal_spacing() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void Background::clear_horizontal_spacing() {
  horizontal_spacing_ = 0;
  clear_has_horizontal_spacing();
}
inline ::google::protobuf::int32 Background::horizontal_spacing() const {
  // @@protoc_insertion_point(field_get:enigma.proto.resource.Background.horizontal_spacing)
  return horizontal_spacing_;
}
inline void Background::set_horizontal_spacing(::google::protobuf::int32 value) {
  set_has_horizontal_spacing();
  horizontal_spacing_ = value;
  // @@protoc_insertion_point(field_set:enigma.proto.resource.Background.horizontal_spacing)
}

// optional int32 vertical_spacing = 16 [(.enigma.proto.resource.gmx) = "tilevsep"];
inline bool Background::has_vertical_spacing() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void Background::set_has_vertical_spacing() {
  _has_bits_[0] |= 0x00000800u;
}
inline void Background::clear_has_vertical_spacing() {
  _has_bits_[0] &= ~0x00000800u;
}
inline void Background::clear_vertical_spacing() {
  vertical_spacing_ = 0;
  clear_has_vertical_spacing();
}
inline ::google::protobuf::int32 Background::vertical_spacing() const {
  // @@protoc_insertion_point(field_get:enigma.proto.resource.Background.vertical_spacing)
  return vertical_spacing_;
}
inline void Background::set_vertical_spacing(::google::protobuf::int32 value) {
  set_has_vertical_spacing();
  vertical_spacing_ = value;
  // @@protoc_insertion_point(field_set:enigma.proto.resource.Background.vertical_spacing)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace resource
}  // namespace proto
}  // namespace enigma

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_game_2eproto__INCLUDED
