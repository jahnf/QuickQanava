// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: quickqanava.proto

#ifndef PROTOBUF_quickqanava_2eproto__INCLUDED
#define PROTOBUF_quickqanava_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/map.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/unknown_field_set.h>
#include "quickproperties.pb.h"
#include "gtpo.pb.h"
// @@protoc_insertion_point(includes)

namespace qan {
namespace pb {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_quickqanava_2eproto();
void protobuf_AssignDesc_quickqanava_2eproto();
void protobuf_ShutdownFile_quickqanava_2eproto();

class Graph;
class Node;
class Style;
class StyleManager;

// ===================================================================

class Style : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:qan.pb.Style) */ {
 public:
  Style();
  virtual ~Style();

  Style(const Style& from);

  inline Style& operator=(const Style& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Style& default_instance();

  void Swap(Style* other);

  // implements Message ----------------------------------------------

  inline Style* New() const { return New(NULL); }

  Style* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Style& from);
  void MergeFrom(const Style& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Style* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 id = 1;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // optional string meta_target = 2;
  void clear_meta_target();
  static const int kMetaTargetFieldNumber = 2;
  const ::std::string& meta_target() const;
  void set_meta_target(const ::std::string& value);
  void set_meta_target(const char* value);
  void set_meta_target(const char* value, size_t size);
  ::std::string* mutable_meta_target();
  ::std::string* release_meta_target();
  void set_allocated_meta_target(::std::string* meta_target);

  // optional string name = 3;
  void clear_name();
  static const int kNameFieldNumber = 3;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // optional string target = 4;
  void clear_target();
  static const int kTargetFieldNumber = 4;
  const ::std::string& target() const;
  void set_target(const ::std::string& value);
  void set_target(const char* value);
  void set_target(const char* value, size_t size);
  ::std::string* mutable_target();
  ::std::string* release_target();
  void set_allocated_target(::std::string* target);

  // optional .qps.pb.QtObject properties = 5;
  bool has_properties() const;
  void clear_properties();
  static const int kPropertiesFieldNumber = 5;
  const ::qps::pb::QtObject& properties() const;
  ::qps::pb::QtObject* mutable_properties();
  ::qps::pb::QtObject* release_properties();
  void set_allocated_properties(::qps::pb::QtObject* properties);

  // repeated int32 node_ids = 6 [packed = true];
  int node_ids_size() const;
  void clear_node_ids();
  static const int kNodeIdsFieldNumber = 6;
  ::google::protobuf::int32 node_ids(int index) const;
  void set_node_ids(int index, ::google::protobuf::int32 value);
  void add_node_ids(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      node_ids() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_node_ids();

  // repeated int32 edge_ids = 7 [packed = true];
  int edge_ids_size() const;
  void clear_edge_ids();
  static const int kEdgeIdsFieldNumber = 7;
  ::google::protobuf::int32 edge_ids(int index) const;
  void set_edge_ids(int index, ::google::protobuf::int32 value);
  void add_edge_ids(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      edge_ids() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_edge_ids();

  // @@protoc_insertion_point(class_scope:qan.pb.Style)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr meta_target_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr target_;
  ::qps::pb::QtObject* properties_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > node_ids_;
  mutable int _node_ids_cached_byte_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > edge_ids_;
  mutable int _edge_ids_cached_byte_size_;
  ::google::protobuf::int32 id_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_quickqanava_2eproto();
  friend void protobuf_AssignDesc_quickqanava_2eproto();
  friend void protobuf_ShutdownFile_quickqanava_2eproto();

  void InitAsDefaultInstance();
  static Style* default_instance_;
};
// -------------------------------------------------------------------

class StyleManager : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:qan.pb.StyleManager) */ {
 public:
  StyleManager();
  virtual ~StyleManager();

  StyleManager(const StyleManager& from);

  inline StyleManager& operator=(const StyleManager& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const StyleManager& default_instance();

  void Swap(StyleManager* other);

  // implements Message ----------------------------------------------

  inline StyleManager* New() const { return New(NULL); }

  StyleManager* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const StyleManager& from);
  void MergeFrom(const StyleManager& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(StyleManager* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  // optional int32 style_count = 1;
  void clear_style_count();
  static const int kStyleCountFieldNumber = 1;
  ::google::protobuf::int32 style_count() const;
  void set_style_count(::google::protobuf::int32 value);

  // repeated .qan.pb.Style styles = 2;
  int styles_size() const;
  void clear_styles();
  static const int kStylesFieldNumber = 2;
  const ::qan::pb::Style& styles(int index) const;
  ::qan::pb::Style* mutable_styles(int index);
  ::qan::pb::Style* add_styles();
  ::google::protobuf::RepeatedPtrField< ::qan::pb::Style >*
      mutable_styles();
  const ::google::protobuf::RepeatedPtrField< ::qan::pb::Style >&
      styles() const;

  // map<string, int32> default_node_styles = 3;
  int default_node_styles_size() const;
  void clear_default_node_styles();
  static const int kDefaultNodeStylesFieldNumber = 3;
  const ::google::protobuf::Map< ::std::string, ::google::protobuf::int32 >&
      default_node_styles() const;
  ::google::protobuf::Map< ::std::string, ::google::protobuf::int32 >*
      mutable_default_node_styles();

  // map<string, int32> default_edge_styles = 4;
  int default_edge_styles_size() const;
  void clear_default_edge_styles();
  static const int kDefaultEdgeStylesFieldNumber = 4;
  const ::google::protobuf::Map< ::std::string, ::google::protobuf::int32 >&
      default_edge_styles() const;
  ::google::protobuf::Map< ::std::string, ::google::protobuf::int32 >*
      mutable_default_edge_styles();

  // @@protoc_insertion_point(class_scope:qan.pb.StyleManager)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::RepeatedPtrField< ::qan::pb::Style > styles_;
  typedef ::google::protobuf::internal::MapEntryLite<
      ::std::string, ::google::protobuf::int32,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_INT32,
      0 >
      StyleManager_DefaultNodeStylesEntry;
  ::google::protobuf::internal::MapField<
      ::std::string, ::google::protobuf::int32,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_INT32,
      0 > default_node_styles_;
  typedef ::google::protobuf::internal::MapEntryLite<
      ::std::string, ::google::protobuf::int32,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_INT32,
      0 >
      StyleManager_DefaultEdgeStylesEntry;
  ::google::protobuf::internal::MapField<
      ::std::string, ::google::protobuf::int32,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_INT32,
      0 > default_edge_styles_;
  ::google::protobuf::int32 style_count_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_quickqanava_2eproto();
  friend void protobuf_AssignDesc_quickqanava_2eproto();
  friend void protobuf_ShutdownFile_quickqanava_2eproto();

  void InitAsDefaultInstance();
  static StyleManager* default_instance_;
};
// -------------------------------------------------------------------

class Node : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:qan.pb.Node) */ {
 public:
  Node();
  virtual ~Node();

  Node(const Node& from);

  inline Node& operator=(const Node& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Node& default_instance();

  void Swap(Node* other);

  // implements Message ----------------------------------------------

  inline Node* New() const { return New(NULL); }

  Node* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Node& from);
  void MergeFrom(const Node& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Node* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .gtpo.pb.Node base = 1;
  bool has_base() const;
  void clear_base();
  static const int kBaseFieldNumber = 1;
  const ::gtpo::pb::Node& base() const;
  ::gtpo::pb::Node* mutable_base();
  ::gtpo::pb::Node* release_base();
  void set_allocated_base(::gtpo::pb::Node* base);

  // optional int32 style_id = 2;
  void clear_style_id();
  static const int kStyleIdFieldNumber = 2;
  ::google::protobuf::int32 style_id() const;
  void set_style_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:qan.pb.Node)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::gtpo::pb::Node* base_;
  ::google::protobuf::int32 style_id_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_quickqanava_2eproto();
  friend void protobuf_AssignDesc_quickqanava_2eproto();
  friend void protobuf_ShutdownFile_quickqanava_2eproto();

  void InitAsDefaultInstance();
  static Node* default_instance_;
};
// -------------------------------------------------------------------

class Graph : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:qan.pb.Graph) */ {
 public:
  Graph();
  virtual ~Graph();

  Graph(const Graph& from);

  inline Graph& operator=(const Graph& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Graph& default_instance();

  void Swap(Graph* other);

  // implements Message ----------------------------------------------

  inline Graph* New() const { return New(NULL); }

  Graph* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Graph& from);
  void MergeFrom(const Graph& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Graph* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .gtpo.pb.Graph graph = 1;
  bool has_graph() const;
  void clear_graph();
  static const int kGraphFieldNumber = 1;
  const ::gtpo::pb::Graph& graph() const;
  ::gtpo::pb::Graph* mutable_graph();
  ::gtpo::pb::Graph* release_graph();
  void set_allocated_graph(::gtpo::pb::Graph* graph);

  // optional .qan.pb.StyleManager style_manager = 2;
  bool has_style_manager() const;
  void clear_style_manager();
  static const int kStyleManagerFieldNumber = 2;
  const ::qan::pb::StyleManager& style_manager() const;
  ::qan::pb::StyleManager* mutable_style_manager();
  ::qan::pb::StyleManager* release_style_manager();
  void set_allocated_style_manager(::qan::pb::StyleManager* style_manager);

  // @@protoc_insertion_point(class_scope:qan.pb.Graph)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::gtpo::pb::Graph* graph_;
  ::qan::pb::StyleManager* style_manager_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_quickqanava_2eproto();
  friend void protobuf_AssignDesc_quickqanava_2eproto();
  friend void protobuf_ShutdownFile_quickqanava_2eproto();

  void InitAsDefaultInstance();
  static Graph* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Style

// optional int32 id = 1;
inline void Style::clear_id() {
  id_ = 0;
}
inline ::google::protobuf::int32 Style::id() const {
  // @@protoc_insertion_point(field_get:qan.pb.Style.id)
  return id_;
}
inline void Style::set_id(::google::protobuf::int32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:qan.pb.Style.id)
}

// optional string meta_target = 2;
inline void Style::clear_meta_target() {
  meta_target_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Style::meta_target() const {
  // @@protoc_insertion_point(field_get:qan.pb.Style.meta_target)
  return meta_target_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Style::set_meta_target(const ::std::string& value) {
  
  meta_target_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:qan.pb.Style.meta_target)
}
inline void Style::set_meta_target(const char* value) {
  
  meta_target_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:qan.pb.Style.meta_target)
}
inline void Style::set_meta_target(const char* value, size_t size) {
  
  meta_target_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:qan.pb.Style.meta_target)
}
inline ::std::string* Style::mutable_meta_target() {
  
  // @@protoc_insertion_point(field_mutable:qan.pb.Style.meta_target)
  return meta_target_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Style::release_meta_target() {
  // @@protoc_insertion_point(field_release:qan.pb.Style.meta_target)
  
  return meta_target_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Style::set_allocated_meta_target(::std::string* meta_target) {
  if (meta_target != NULL) {
    
  } else {
    
  }
  meta_target_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), meta_target);
  // @@protoc_insertion_point(field_set_allocated:qan.pb.Style.meta_target)
}

// optional string name = 3;
inline void Style::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Style::name() const {
  // @@protoc_insertion_point(field_get:qan.pb.Style.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Style::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:qan.pb.Style.name)
}
inline void Style::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:qan.pb.Style.name)
}
inline void Style::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:qan.pb.Style.name)
}
inline ::std::string* Style::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:qan.pb.Style.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Style::release_name() {
  // @@protoc_insertion_point(field_release:qan.pb.Style.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Style::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:qan.pb.Style.name)
}

// optional string target = 4;
inline void Style::clear_target() {
  target_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Style::target() const {
  // @@protoc_insertion_point(field_get:qan.pb.Style.target)
  return target_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Style::set_target(const ::std::string& value) {
  
  target_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:qan.pb.Style.target)
}
inline void Style::set_target(const char* value) {
  
  target_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:qan.pb.Style.target)
}
inline void Style::set_target(const char* value, size_t size) {
  
  target_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:qan.pb.Style.target)
}
inline ::std::string* Style::mutable_target() {
  
  // @@protoc_insertion_point(field_mutable:qan.pb.Style.target)
  return target_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Style::release_target() {
  // @@protoc_insertion_point(field_release:qan.pb.Style.target)
  
  return target_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Style::set_allocated_target(::std::string* target) {
  if (target != NULL) {
    
  } else {
    
  }
  target_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), target);
  // @@protoc_insertion_point(field_set_allocated:qan.pb.Style.target)
}

// optional .qps.pb.QtObject properties = 5;
inline bool Style::has_properties() const {
  return !_is_default_instance_ && properties_ != NULL;
}
inline void Style::clear_properties() {
  if (GetArenaNoVirtual() == NULL && properties_ != NULL) delete properties_;
  properties_ = NULL;
}
inline const ::qps::pb::QtObject& Style::properties() const {
  // @@protoc_insertion_point(field_get:qan.pb.Style.properties)
  return properties_ != NULL ? *properties_ : *default_instance_->properties_;
}
inline ::qps::pb::QtObject* Style::mutable_properties() {
  
  if (properties_ == NULL) {
    properties_ = new ::qps::pb::QtObject;
  }
  // @@protoc_insertion_point(field_mutable:qan.pb.Style.properties)
  return properties_;
}
inline ::qps::pb::QtObject* Style::release_properties() {
  // @@protoc_insertion_point(field_release:qan.pb.Style.properties)
  
  ::qps::pb::QtObject* temp = properties_;
  properties_ = NULL;
  return temp;
}
inline void Style::set_allocated_properties(::qps::pb::QtObject* properties) {
  delete properties_;
  properties_ = properties;
  if (properties) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:qan.pb.Style.properties)
}

// repeated int32 node_ids = 6 [packed = true];
inline int Style::node_ids_size() const {
  return node_ids_.size();
}
inline void Style::clear_node_ids() {
  node_ids_.Clear();
}
inline ::google::protobuf::int32 Style::node_ids(int index) const {
  // @@protoc_insertion_point(field_get:qan.pb.Style.node_ids)
  return node_ids_.Get(index);
}
inline void Style::set_node_ids(int index, ::google::protobuf::int32 value) {
  node_ids_.Set(index, value);
  // @@protoc_insertion_point(field_set:qan.pb.Style.node_ids)
}
inline void Style::add_node_ids(::google::protobuf::int32 value) {
  node_ids_.Add(value);
  // @@protoc_insertion_point(field_add:qan.pb.Style.node_ids)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
Style::node_ids() const {
  // @@protoc_insertion_point(field_list:qan.pb.Style.node_ids)
  return node_ids_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
Style::mutable_node_ids() {
  // @@protoc_insertion_point(field_mutable_list:qan.pb.Style.node_ids)
  return &node_ids_;
}

// repeated int32 edge_ids = 7 [packed = true];
inline int Style::edge_ids_size() const {
  return edge_ids_.size();
}
inline void Style::clear_edge_ids() {
  edge_ids_.Clear();
}
inline ::google::protobuf::int32 Style::edge_ids(int index) const {
  // @@protoc_insertion_point(field_get:qan.pb.Style.edge_ids)
  return edge_ids_.Get(index);
}
inline void Style::set_edge_ids(int index, ::google::protobuf::int32 value) {
  edge_ids_.Set(index, value);
  // @@protoc_insertion_point(field_set:qan.pb.Style.edge_ids)
}
inline void Style::add_edge_ids(::google::protobuf::int32 value) {
  edge_ids_.Add(value);
  // @@protoc_insertion_point(field_add:qan.pb.Style.edge_ids)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
Style::edge_ids() const {
  // @@protoc_insertion_point(field_list:qan.pb.Style.edge_ids)
  return edge_ids_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
Style::mutable_edge_ids() {
  // @@protoc_insertion_point(field_mutable_list:qan.pb.Style.edge_ids)
  return &edge_ids_;
}

// -------------------------------------------------------------------

// StyleManager

// optional int32 style_count = 1;
inline void StyleManager::clear_style_count() {
  style_count_ = 0;
}
inline ::google::protobuf::int32 StyleManager::style_count() const {
  // @@protoc_insertion_point(field_get:qan.pb.StyleManager.style_count)
  return style_count_;
}
inline void StyleManager::set_style_count(::google::protobuf::int32 value) {
  
  style_count_ = value;
  // @@protoc_insertion_point(field_set:qan.pb.StyleManager.style_count)
}

// repeated .qan.pb.Style styles = 2;
inline int StyleManager::styles_size() const {
  return styles_.size();
}
inline void StyleManager::clear_styles() {
  styles_.Clear();
}
inline const ::qan::pb::Style& StyleManager::styles(int index) const {
  // @@protoc_insertion_point(field_get:qan.pb.StyleManager.styles)
  return styles_.Get(index);
}
inline ::qan::pb::Style* StyleManager::mutable_styles(int index) {
  // @@protoc_insertion_point(field_mutable:qan.pb.StyleManager.styles)
  return styles_.Mutable(index);
}
inline ::qan::pb::Style* StyleManager::add_styles() {
  // @@protoc_insertion_point(field_add:qan.pb.StyleManager.styles)
  return styles_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::qan::pb::Style >*
StyleManager::mutable_styles() {
  // @@protoc_insertion_point(field_mutable_list:qan.pb.StyleManager.styles)
  return &styles_;
}
inline const ::google::protobuf::RepeatedPtrField< ::qan::pb::Style >&
StyleManager::styles() const {
  // @@protoc_insertion_point(field_list:qan.pb.StyleManager.styles)
  return styles_;
}

// map<string, int32> default_node_styles = 3;
inline int StyleManager::default_node_styles_size() const {
  return default_node_styles_.size();
}
inline void StyleManager::clear_default_node_styles() {
  default_node_styles_.Clear();
}
inline const ::google::protobuf::Map< ::std::string, ::google::protobuf::int32 >&
StyleManager::default_node_styles() const {
  // @@protoc_insertion_point(field_map:qan.pb.StyleManager.default_node_styles)
  return default_node_styles_.GetMap();
}
inline ::google::protobuf::Map< ::std::string, ::google::protobuf::int32 >*
StyleManager::mutable_default_node_styles() {
  // @@protoc_insertion_point(field_mutable_map:qan.pb.StyleManager.default_node_styles)
  return default_node_styles_.MutableMap();
}

// map<string, int32> default_edge_styles = 4;
inline int StyleManager::default_edge_styles_size() const {
  return default_edge_styles_.size();
}
inline void StyleManager::clear_default_edge_styles() {
  default_edge_styles_.Clear();
}
inline const ::google::protobuf::Map< ::std::string, ::google::protobuf::int32 >&
StyleManager::default_edge_styles() const {
  // @@protoc_insertion_point(field_map:qan.pb.StyleManager.default_edge_styles)
  return default_edge_styles_.GetMap();
}
inline ::google::protobuf::Map< ::std::string, ::google::protobuf::int32 >*
StyleManager::mutable_default_edge_styles() {
  // @@protoc_insertion_point(field_mutable_map:qan.pb.StyleManager.default_edge_styles)
  return default_edge_styles_.MutableMap();
}

// -------------------------------------------------------------------

// Node

// optional .gtpo.pb.Node base = 1;
inline bool Node::has_base() const {
  return !_is_default_instance_ && base_ != NULL;
}
inline void Node::clear_base() {
  if (GetArenaNoVirtual() == NULL && base_ != NULL) delete base_;
  base_ = NULL;
}
inline const ::gtpo::pb::Node& Node::base() const {
  // @@protoc_insertion_point(field_get:qan.pb.Node.base)
  return base_ != NULL ? *base_ : *default_instance_->base_;
}
inline ::gtpo::pb::Node* Node::mutable_base() {
  
  if (base_ == NULL) {
    base_ = new ::gtpo::pb::Node;
  }
  // @@protoc_insertion_point(field_mutable:qan.pb.Node.base)
  return base_;
}
inline ::gtpo::pb::Node* Node::release_base() {
  // @@protoc_insertion_point(field_release:qan.pb.Node.base)
  
  ::gtpo::pb::Node* temp = base_;
  base_ = NULL;
  return temp;
}
inline void Node::set_allocated_base(::gtpo::pb::Node* base) {
  delete base_;
  base_ = base;
  if (base) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:qan.pb.Node.base)
}

// optional int32 style_id = 2;
inline void Node::clear_style_id() {
  style_id_ = 0;
}
inline ::google::protobuf::int32 Node::style_id() const {
  // @@protoc_insertion_point(field_get:qan.pb.Node.style_id)
  return style_id_;
}
inline void Node::set_style_id(::google::protobuf::int32 value) {
  
  style_id_ = value;
  // @@protoc_insertion_point(field_set:qan.pb.Node.style_id)
}

// -------------------------------------------------------------------

// Graph

// optional .gtpo.pb.Graph graph = 1;
inline bool Graph::has_graph() const {
  return !_is_default_instance_ && graph_ != NULL;
}
inline void Graph::clear_graph() {
  if (GetArenaNoVirtual() == NULL && graph_ != NULL) delete graph_;
  graph_ = NULL;
}
inline const ::gtpo::pb::Graph& Graph::graph() const {
  // @@protoc_insertion_point(field_get:qan.pb.Graph.graph)
  return graph_ != NULL ? *graph_ : *default_instance_->graph_;
}
inline ::gtpo::pb::Graph* Graph::mutable_graph() {
  
  if (graph_ == NULL) {
    graph_ = new ::gtpo::pb::Graph;
  }
  // @@protoc_insertion_point(field_mutable:qan.pb.Graph.graph)
  return graph_;
}
inline ::gtpo::pb::Graph* Graph::release_graph() {
  // @@protoc_insertion_point(field_release:qan.pb.Graph.graph)
  
  ::gtpo::pb::Graph* temp = graph_;
  graph_ = NULL;
  return temp;
}
inline void Graph::set_allocated_graph(::gtpo::pb::Graph* graph) {
  delete graph_;
  graph_ = graph;
  if (graph) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:qan.pb.Graph.graph)
}

// optional .qan.pb.StyleManager style_manager = 2;
inline bool Graph::has_style_manager() const {
  return !_is_default_instance_ && style_manager_ != NULL;
}
inline void Graph::clear_style_manager() {
  if (GetArenaNoVirtual() == NULL && style_manager_ != NULL) delete style_manager_;
  style_manager_ = NULL;
}
inline const ::qan::pb::StyleManager& Graph::style_manager() const {
  // @@protoc_insertion_point(field_get:qan.pb.Graph.style_manager)
  return style_manager_ != NULL ? *style_manager_ : *default_instance_->style_manager_;
}
inline ::qan::pb::StyleManager* Graph::mutable_style_manager() {
  
  if (style_manager_ == NULL) {
    style_manager_ = new ::qan::pb::StyleManager;
  }
  // @@protoc_insertion_point(field_mutable:qan.pb.Graph.style_manager)
  return style_manager_;
}
inline ::qan::pb::StyleManager* Graph::release_style_manager() {
  // @@protoc_insertion_point(field_release:qan.pb.Graph.style_manager)
  
  ::qan::pb::StyleManager* temp = style_manager_;
  style_manager_ = NULL;
  return temp;
}
inline void Graph::set_allocated_style_manager(::qan::pb::StyleManager* style_manager) {
  delete style_manager_;
  style_manager_ = style_manager;
  if (style_manager) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:qan.pb.Graph.style_manager)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace pb
}  // namespace qan

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_quickqanava_2eproto__INCLUDED
