# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: esriPBuffer/graph/AddFieldsRequest.proto
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from esriPBuffer.graph import DataModelTypes_pb2 as esriPBuffer_dot_graph_dot_DataModelTypes__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='esriPBuffer/graph/AddFieldsRequest.proto',
  package='esriPBuffer.graph',
  syntax='proto3',
  serialized_options=b'\n\036com.esri.arcgis.protobuf.graphH\003\370\001\001',
  create_key=_descriptor._internal_create_key,
  serialized_pb=b'\n(esriPBuffer/graph/AddFieldsRequest.proto\x12\x11\x65sriPBuffer.graph\x1a&esriPBuffer/graph/DataModelTypes.proto\"V\n\x18GraphPropertyAddsRequest\x12:\n\x10graph_properties\x18\x01 \x03(\x0b\x32 .esriPBuffer.graph.GraphPropertyB%\n\x1e\x63om.esri.arcgis.protobuf.graphH\x03\xf8\x01\x01\x62\x06proto3'
  ,
  dependencies=[esriPBuffer_dot_graph_dot_DataModelTypes__pb2.DESCRIPTOR,])




_GRAPHPROPERTYADDSREQUEST = _descriptor.Descriptor(
  name='GraphPropertyAddsRequest',
  full_name='esriPBuffer.graph.GraphPropertyAddsRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='graph_properties', full_name='esriPBuffer.graph.GraphPropertyAddsRequest.graph_properties', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=103,
  serialized_end=189,
)

_GRAPHPROPERTYADDSREQUEST.fields_by_name['graph_properties'].message_type = esriPBuffer_dot_graph_dot_DataModelTypes__pb2._GRAPHPROPERTY
DESCRIPTOR.message_types_by_name['GraphPropertyAddsRequest'] = _GRAPHPROPERTYADDSREQUEST
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

GraphPropertyAddsRequest = _reflection.GeneratedProtocolMessageType('GraphPropertyAddsRequest', (_message.Message,), {
  'DESCRIPTOR' : _GRAPHPROPERTYADDSREQUEST,
  '__module__' : 'esriPBuffer.graph.AddFieldsRequest_pb2'
  # @@protoc_insertion_point(class_scope:esriPBuffer.graph.GraphPropertyAddsRequest)
  })
_sym_db.RegisterMessage(GraphPropertyAddsRequest)


DESCRIPTOR._options = None
# @@protoc_insertion_point(module_scope)