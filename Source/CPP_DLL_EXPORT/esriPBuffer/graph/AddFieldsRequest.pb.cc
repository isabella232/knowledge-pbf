// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: esriPBuffer/graph/AddFieldsRequest.proto

#include "esriPBuffer/graph/AddFieldsRequest.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_esriPBuffer_2fgraph_2fDataModelTypes_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_GraphProperty_esriPBuffer_2fgraph_2fDataModelTypes_2eproto;
namespace esriPBuffer {
namespace graph {
class GraphPropertyAddsRequestDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<GraphPropertyAddsRequest> _instance;
} _GraphPropertyAddsRequest_default_instance_;
}  // namespace graph
}  // namespace esriPBuffer
static void InitDefaultsscc_info_GraphPropertyAddsRequest_esriPBuffer_2fgraph_2fAddFieldsRequest_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::esriPBuffer::graph::_GraphPropertyAddsRequest_default_instance_;
    new (ptr) ::esriPBuffer::graph::GraphPropertyAddsRequest();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::esriPBuffer::graph::GraphPropertyAddsRequest::InitAsDefaultInstance();
}

EXT_CLASS ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_GraphPropertyAddsRequest_esriPBuffer_2fgraph_2fAddFieldsRequest_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_GraphPropertyAddsRequest_esriPBuffer_2fgraph_2fAddFieldsRequest_2eproto}, {
      &scc_info_GraphProperty_esriPBuffer_2fgraph_2fDataModelTypes_2eproto.base,}};

namespace esriPBuffer {
namespace graph {

// ===================================================================

void GraphPropertyAddsRequest::InitAsDefaultInstance() {
}
class GraphPropertyAddsRequest::_Internal {
 public:
};

void GraphPropertyAddsRequest::clear_graph_properties() {
  graph_properties_.Clear();
}
GraphPropertyAddsRequest::GraphPropertyAddsRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena),
  graph_properties_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:esriPBuffer.graph.GraphPropertyAddsRequest)
}
GraphPropertyAddsRequest::GraphPropertyAddsRequest(const GraphPropertyAddsRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      graph_properties_(from.graph_properties_) {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:esriPBuffer.graph.GraphPropertyAddsRequest)
}

void GraphPropertyAddsRequest::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_GraphPropertyAddsRequest_esriPBuffer_2fgraph_2fAddFieldsRequest_2eproto.base);
}

GraphPropertyAddsRequest::~GraphPropertyAddsRequest() {
  // @@protoc_insertion_point(destructor:esriPBuffer.graph.GraphPropertyAddsRequest)
  SharedDtor();
  _internal_metadata_.Delete<std::string>();
}

void GraphPropertyAddsRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void GraphPropertyAddsRequest::ArenaDtor(void* object) {
  GraphPropertyAddsRequest* _this = reinterpret_cast< GraphPropertyAddsRequest* >(object);
  (void)_this;
}
void GraphPropertyAddsRequest::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void GraphPropertyAddsRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const GraphPropertyAddsRequest& GraphPropertyAddsRequest::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_GraphPropertyAddsRequest_esriPBuffer_2fgraph_2fAddFieldsRequest_2eproto.base);
  return *internal_default_instance();
}


void GraphPropertyAddsRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:esriPBuffer.graph.GraphPropertyAddsRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  graph_properties_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* GraphPropertyAddsRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated .esriPBuffer.graph.GraphProperty graph_properties = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_graph_properties(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<std::string>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* GraphPropertyAddsRequest::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:esriPBuffer.graph.GraphPropertyAddsRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .esriPBuffer.graph.GraphProperty graph_properties = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_graph_properties_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, this->_internal_graph_properties(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:esriPBuffer.graph.GraphPropertyAddsRequest)
  return target;
}

size_t GraphPropertyAddsRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:esriPBuffer.graph.GraphPropertyAddsRequest)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .esriPBuffer.graph.GraphProperty graph_properties = 1;
  total_size += 1UL * this->_internal_graph_properties_size();
  for (const auto& msg : this->graph_properties_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void GraphPropertyAddsRequest::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::PROTOBUF_NAMESPACE_ID::internal::DownCast<const GraphPropertyAddsRequest*>(
      &from));
}

void GraphPropertyAddsRequest::MergeFrom(const GraphPropertyAddsRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:esriPBuffer.graph.GraphPropertyAddsRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  graph_properties_.MergeFrom(from.graph_properties_);
}

void GraphPropertyAddsRequest::CopyFrom(const GraphPropertyAddsRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:esriPBuffer.graph.GraphPropertyAddsRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GraphPropertyAddsRequest::IsInitialized() const {
  return true;
}

void GraphPropertyAddsRequest::InternalSwap(GraphPropertyAddsRequest* other) {
  using std::swap;
  _internal_metadata_.Swap<std::string>(&other->_internal_metadata_);
  graph_properties_.InternalSwap(&other->graph_properties_);
}

std::string GraphPropertyAddsRequest::GetTypeName() const {
  return "esriPBuffer.graph.GraphPropertyAddsRequest";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace graph
}  // namespace esriPBuffer
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::esriPBuffer::graph::GraphPropertyAddsRequest* Arena::CreateMaybeMessage< ::esriPBuffer::graph::GraphPropertyAddsRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::esriPBuffer::graph::GraphPropertyAddsRequest >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>