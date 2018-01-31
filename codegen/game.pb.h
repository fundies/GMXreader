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
#include "resources/Sprite.pb.h"
#include "resources/Sound.pb.h"
#include "resources/Background.pb.h"
#include "resources/Object.pb.h"
#include "resources/Script.pb.h"
#include "resources/Shader.pb.h"
#include "resources/Path.pb.h"
#include "resources/Font.pb.h"
#include "resources/Timeline.pb.h"
// @@protoc_insertion_point(includes)
namespace buffers {
class Project;
class ProjectDefaultTypeInternal;
extern ProjectDefaultTypeInternal _Project_default_instance_;
}  // namespace buffers

namespace buffers {

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

class Project : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:buffers.Project) */ {
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

  // repeated .buffers.resources.Sprite sprites = 1;
  int sprites_size() const;
  void clear_sprites();
  static const int kSpritesFieldNumber = 1;
  const ::buffers::resources::Sprite& sprites(int index) const;
  ::buffers::resources::Sprite* mutable_sprites(int index);
  ::buffers::resources::Sprite* add_sprites();
  ::google::protobuf::RepeatedPtrField< ::buffers::resources::Sprite >*
      mutable_sprites();
  const ::google::protobuf::RepeatedPtrField< ::buffers::resources::Sprite >&
      sprites() const;

  // repeated .buffers.resources.Sound sounds = 2;
  int sounds_size() const;
  void clear_sounds();
  static const int kSoundsFieldNumber = 2;
  const ::buffers::resources::Sound& sounds(int index) const;
  ::buffers::resources::Sound* mutable_sounds(int index);
  ::buffers::resources::Sound* add_sounds();
  ::google::protobuf::RepeatedPtrField< ::buffers::resources::Sound >*
      mutable_sounds();
  const ::google::protobuf::RepeatedPtrField< ::buffers::resources::Sound >&
      sounds() const;

  // repeated .buffers.resources.Background backgrounds = 3;
  int backgrounds_size() const;
  void clear_backgrounds();
  static const int kBackgroundsFieldNumber = 3;
  const ::buffers::resources::Background& backgrounds(int index) const;
  ::buffers::resources::Background* mutable_backgrounds(int index);
  ::buffers::resources::Background* add_backgrounds();
  ::google::protobuf::RepeatedPtrField< ::buffers::resources::Background >*
      mutable_backgrounds();
  const ::google::protobuf::RepeatedPtrField< ::buffers::resources::Background >&
      backgrounds() const;

  // repeated .buffers.resources.Path paths = 4;
  int paths_size() const;
  void clear_paths();
  static const int kPathsFieldNumber = 4;
  const ::buffers::resources::Path& paths(int index) const;
  ::buffers::resources::Path* mutable_paths(int index);
  ::buffers::resources::Path* add_paths();
  ::google::protobuf::RepeatedPtrField< ::buffers::resources::Path >*
      mutable_paths();
  const ::google::protobuf::RepeatedPtrField< ::buffers::resources::Path >&
      paths() const;

  // repeated .buffers.resources.Script scripts = 5;
  int scripts_size() const;
  void clear_scripts();
  static const int kScriptsFieldNumber = 5;
  const ::buffers::resources::Script& scripts(int index) const;
  ::buffers::resources::Script* mutable_scripts(int index);
  ::buffers::resources::Script* add_scripts();
  ::google::protobuf::RepeatedPtrField< ::buffers::resources::Script >*
      mutable_scripts();
  const ::google::protobuf::RepeatedPtrField< ::buffers::resources::Script >&
      scripts() const;

  // repeated .buffers.resources.Shader shaders = 6;
  int shaders_size() const;
  void clear_shaders();
  static const int kShadersFieldNumber = 6;
  const ::buffers::resources::Shader& shaders(int index) const;
  ::buffers::resources::Shader* mutable_shaders(int index);
  ::buffers::resources::Shader* add_shaders();
  ::google::protobuf::RepeatedPtrField< ::buffers::resources::Shader >*
      mutable_shaders();
  const ::google::protobuf::RepeatedPtrField< ::buffers::resources::Shader >&
      shaders() const;

  // repeated .buffers.resources.Font fonts = 7;
  int fonts_size() const;
  void clear_fonts();
  static const int kFontsFieldNumber = 7;
  const ::buffers::resources::Font& fonts(int index) const;
  ::buffers::resources::Font* mutable_fonts(int index);
  ::buffers::resources::Font* add_fonts();
  ::google::protobuf::RepeatedPtrField< ::buffers::resources::Font >*
      mutable_fonts();
  const ::google::protobuf::RepeatedPtrField< ::buffers::resources::Font >&
      fonts() const;

  // repeated .buffers.resources.Timeline timelines = 8;
  int timelines_size() const;
  void clear_timelines();
  static const int kTimelinesFieldNumber = 8;
  const ::buffers::resources::Timeline& timelines(int index) const;
  ::buffers::resources::Timeline* mutable_timelines(int index);
  ::buffers::resources::Timeline* add_timelines();
  ::google::protobuf::RepeatedPtrField< ::buffers::resources::Timeline >*
      mutable_timelines();
  const ::google::protobuf::RepeatedPtrField< ::buffers::resources::Timeline >&
      timelines() const;

  // repeated .buffers.resources.Object objects = 9;
  int objects_size() const;
  void clear_objects();
  static const int kObjectsFieldNumber = 9;
  const ::buffers::resources::Object& objects(int index) const;
  ::buffers::resources::Object* mutable_objects(int index);
  ::buffers::resources::Object* add_objects();
  ::google::protobuf::RepeatedPtrField< ::buffers::resources::Object >*
      mutable_objects();
  const ::google::protobuf::RepeatedPtrField< ::buffers::resources::Object >&
      objects() const;

  // @@protoc_insertion_point(class_scope:buffers.Project)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::buffers::resources::Sprite > sprites_;
  ::google::protobuf::RepeatedPtrField< ::buffers::resources::Sound > sounds_;
  ::google::protobuf::RepeatedPtrField< ::buffers::resources::Background > backgrounds_;
  ::google::protobuf::RepeatedPtrField< ::buffers::resources::Path > paths_;
  ::google::protobuf::RepeatedPtrField< ::buffers::resources::Script > scripts_;
  ::google::protobuf::RepeatedPtrField< ::buffers::resources::Shader > shaders_;
  ::google::protobuf::RepeatedPtrField< ::buffers::resources::Font > fonts_;
  ::google::protobuf::RepeatedPtrField< ::buffers::resources::Timeline > timelines_;
  ::google::protobuf::RepeatedPtrField< ::buffers::resources::Object > objects_;
  friend struct protobuf_game_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Project

// repeated .buffers.resources.Sprite sprites = 1;
inline int Project::sprites_size() const {
  return sprites_.size();
}
inline void Project::clear_sprites() {
  sprites_.Clear();
}
inline const ::buffers::resources::Sprite& Project::sprites(int index) const {
  // @@protoc_insertion_point(field_get:buffers.Project.sprites)
  return sprites_.Get(index);
}
inline ::buffers::resources::Sprite* Project::mutable_sprites(int index) {
  // @@protoc_insertion_point(field_mutable:buffers.Project.sprites)
  return sprites_.Mutable(index);
}
inline ::buffers::resources::Sprite* Project::add_sprites() {
  // @@protoc_insertion_point(field_add:buffers.Project.sprites)
  return sprites_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::buffers::resources::Sprite >*
Project::mutable_sprites() {
  // @@protoc_insertion_point(field_mutable_list:buffers.Project.sprites)
  return &sprites_;
}
inline const ::google::protobuf::RepeatedPtrField< ::buffers::resources::Sprite >&
Project::sprites() const {
  // @@protoc_insertion_point(field_list:buffers.Project.sprites)
  return sprites_;
}

// repeated .buffers.resources.Sound sounds = 2;
inline int Project::sounds_size() const {
  return sounds_.size();
}
inline void Project::clear_sounds() {
  sounds_.Clear();
}
inline const ::buffers::resources::Sound& Project::sounds(int index) const {
  // @@protoc_insertion_point(field_get:buffers.Project.sounds)
  return sounds_.Get(index);
}
inline ::buffers::resources::Sound* Project::mutable_sounds(int index) {
  // @@protoc_insertion_point(field_mutable:buffers.Project.sounds)
  return sounds_.Mutable(index);
}
inline ::buffers::resources::Sound* Project::add_sounds() {
  // @@protoc_insertion_point(field_add:buffers.Project.sounds)
  return sounds_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::buffers::resources::Sound >*
Project::mutable_sounds() {
  // @@protoc_insertion_point(field_mutable_list:buffers.Project.sounds)
  return &sounds_;
}
inline const ::google::protobuf::RepeatedPtrField< ::buffers::resources::Sound >&
Project::sounds() const {
  // @@protoc_insertion_point(field_list:buffers.Project.sounds)
  return sounds_;
}

// repeated .buffers.resources.Background backgrounds = 3;
inline int Project::backgrounds_size() const {
  return backgrounds_.size();
}
inline void Project::clear_backgrounds() {
  backgrounds_.Clear();
}
inline const ::buffers::resources::Background& Project::backgrounds(int index) const {
  // @@protoc_insertion_point(field_get:buffers.Project.backgrounds)
  return backgrounds_.Get(index);
}
inline ::buffers::resources::Background* Project::mutable_backgrounds(int index) {
  // @@protoc_insertion_point(field_mutable:buffers.Project.backgrounds)
  return backgrounds_.Mutable(index);
}
inline ::buffers::resources::Background* Project::add_backgrounds() {
  // @@protoc_insertion_point(field_add:buffers.Project.backgrounds)
  return backgrounds_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::buffers::resources::Background >*
Project::mutable_backgrounds() {
  // @@protoc_insertion_point(field_mutable_list:buffers.Project.backgrounds)
  return &backgrounds_;
}
inline const ::google::protobuf::RepeatedPtrField< ::buffers::resources::Background >&
Project::backgrounds() const {
  // @@protoc_insertion_point(field_list:buffers.Project.backgrounds)
  return backgrounds_;
}

// repeated .buffers.resources.Path paths = 4;
inline int Project::paths_size() const {
  return paths_.size();
}
inline void Project::clear_paths() {
  paths_.Clear();
}
inline const ::buffers::resources::Path& Project::paths(int index) const {
  // @@protoc_insertion_point(field_get:buffers.Project.paths)
  return paths_.Get(index);
}
inline ::buffers::resources::Path* Project::mutable_paths(int index) {
  // @@protoc_insertion_point(field_mutable:buffers.Project.paths)
  return paths_.Mutable(index);
}
inline ::buffers::resources::Path* Project::add_paths() {
  // @@protoc_insertion_point(field_add:buffers.Project.paths)
  return paths_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::buffers::resources::Path >*
Project::mutable_paths() {
  // @@protoc_insertion_point(field_mutable_list:buffers.Project.paths)
  return &paths_;
}
inline const ::google::protobuf::RepeatedPtrField< ::buffers::resources::Path >&
Project::paths() const {
  // @@protoc_insertion_point(field_list:buffers.Project.paths)
  return paths_;
}

// repeated .buffers.resources.Script scripts = 5;
inline int Project::scripts_size() const {
  return scripts_.size();
}
inline void Project::clear_scripts() {
  scripts_.Clear();
}
inline const ::buffers::resources::Script& Project::scripts(int index) const {
  // @@protoc_insertion_point(field_get:buffers.Project.scripts)
  return scripts_.Get(index);
}
inline ::buffers::resources::Script* Project::mutable_scripts(int index) {
  // @@protoc_insertion_point(field_mutable:buffers.Project.scripts)
  return scripts_.Mutable(index);
}
inline ::buffers::resources::Script* Project::add_scripts() {
  // @@protoc_insertion_point(field_add:buffers.Project.scripts)
  return scripts_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::buffers::resources::Script >*
Project::mutable_scripts() {
  // @@protoc_insertion_point(field_mutable_list:buffers.Project.scripts)
  return &scripts_;
}
inline const ::google::protobuf::RepeatedPtrField< ::buffers::resources::Script >&
Project::scripts() const {
  // @@protoc_insertion_point(field_list:buffers.Project.scripts)
  return scripts_;
}

// repeated .buffers.resources.Shader shaders = 6;
inline int Project::shaders_size() const {
  return shaders_.size();
}
inline void Project::clear_shaders() {
  shaders_.Clear();
}
inline const ::buffers::resources::Shader& Project::shaders(int index) const {
  // @@protoc_insertion_point(field_get:buffers.Project.shaders)
  return shaders_.Get(index);
}
inline ::buffers::resources::Shader* Project::mutable_shaders(int index) {
  // @@protoc_insertion_point(field_mutable:buffers.Project.shaders)
  return shaders_.Mutable(index);
}
inline ::buffers::resources::Shader* Project::add_shaders() {
  // @@protoc_insertion_point(field_add:buffers.Project.shaders)
  return shaders_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::buffers::resources::Shader >*
Project::mutable_shaders() {
  // @@protoc_insertion_point(field_mutable_list:buffers.Project.shaders)
  return &shaders_;
}
inline const ::google::protobuf::RepeatedPtrField< ::buffers::resources::Shader >&
Project::shaders() const {
  // @@protoc_insertion_point(field_list:buffers.Project.shaders)
  return shaders_;
}

// repeated .buffers.resources.Font fonts = 7;
inline int Project::fonts_size() const {
  return fonts_.size();
}
inline void Project::clear_fonts() {
  fonts_.Clear();
}
inline const ::buffers::resources::Font& Project::fonts(int index) const {
  // @@protoc_insertion_point(field_get:buffers.Project.fonts)
  return fonts_.Get(index);
}
inline ::buffers::resources::Font* Project::mutable_fonts(int index) {
  // @@protoc_insertion_point(field_mutable:buffers.Project.fonts)
  return fonts_.Mutable(index);
}
inline ::buffers::resources::Font* Project::add_fonts() {
  // @@protoc_insertion_point(field_add:buffers.Project.fonts)
  return fonts_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::buffers::resources::Font >*
Project::mutable_fonts() {
  // @@protoc_insertion_point(field_mutable_list:buffers.Project.fonts)
  return &fonts_;
}
inline const ::google::protobuf::RepeatedPtrField< ::buffers::resources::Font >&
Project::fonts() const {
  // @@protoc_insertion_point(field_list:buffers.Project.fonts)
  return fonts_;
}

// repeated .buffers.resources.Timeline timelines = 8;
inline int Project::timelines_size() const {
  return timelines_.size();
}
inline void Project::clear_timelines() {
  timelines_.Clear();
}
inline const ::buffers::resources::Timeline& Project::timelines(int index) const {
  // @@protoc_insertion_point(field_get:buffers.Project.timelines)
  return timelines_.Get(index);
}
inline ::buffers::resources::Timeline* Project::mutable_timelines(int index) {
  // @@protoc_insertion_point(field_mutable:buffers.Project.timelines)
  return timelines_.Mutable(index);
}
inline ::buffers::resources::Timeline* Project::add_timelines() {
  // @@protoc_insertion_point(field_add:buffers.Project.timelines)
  return timelines_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::buffers::resources::Timeline >*
Project::mutable_timelines() {
  // @@protoc_insertion_point(field_mutable_list:buffers.Project.timelines)
  return &timelines_;
}
inline const ::google::protobuf::RepeatedPtrField< ::buffers::resources::Timeline >&
Project::timelines() const {
  // @@protoc_insertion_point(field_list:buffers.Project.timelines)
  return timelines_;
}

// repeated .buffers.resources.Object objects = 9;
inline int Project::objects_size() const {
  return objects_.size();
}
inline void Project::clear_objects() {
  objects_.Clear();
}
inline const ::buffers::resources::Object& Project::objects(int index) const {
  // @@protoc_insertion_point(field_get:buffers.Project.objects)
  return objects_.Get(index);
}
inline ::buffers::resources::Object* Project::mutable_objects(int index) {
  // @@protoc_insertion_point(field_mutable:buffers.Project.objects)
  return objects_.Mutable(index);
}
inline ::buffers::resources::Object* Project::add_objects() {
  // @@protoc_insertion_point(field_add:buffers.Project.objects)
  return objects_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::buffers::resources::Object >*
Project::mutable_objects() {
  // @@protoc_insertion_point(field_mutable_list:buffers.Project.objects)
  return &objects_;
}
inline const ::google::protobuf::RepeatedPtrField< ::buffers::resources::Object >&
Project::objects() const {
  // @@protoc_insertion_point(field_list:buffers.Project.objects)
  return objects_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace buffers

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_game_2eproto__INCLUDED
