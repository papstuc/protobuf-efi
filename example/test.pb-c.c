/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: test.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "test.pb-c.h"
void   proto_test__init
                     (ProtoTest         *message)
{
  static const ProtoTest init_value = PROTO_TEST__INIT;
  *message = init_value;
}
size_t proto_test__get_packed_size
                     (const ProtoTest *message)
{
  assert(message->base.descriptor == &proto_test__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t proto_test__pack
                     (const ProtoTest *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &proto_test__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t proto_test__pack_to_buffer
                     (const ProtoTest *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &proto_test__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
ProtoTest *
       proto_test__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (ProtoTest *)
     protobuf_c_message_unpack (&proto_test__descriptor,
                                allocator, len, data);
}
void   proto_test__free_unpacked
                     (ProtoTest *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &proto_test__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor proto_test__field_descriptors[1] =
{
  {
    "size",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(ProtoTest, size),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned proto_test__field_indices_by_name[] = {
  0,   /* field[0] = size */
};
static const ProtobufCIntRange proto_test__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor proto_test__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "proto_test",
  "ProtoTest",
  "ProtoTest",
  "",
  sizeof(ProtoTest),
  1,
  proto_test__field_descriptors,
  proto_test__field_indices_by_name,
  1,  proto_test__number_ranges,
  (ProtobufCMessageInit) proto_test__init,
  NULL,NULL,NULL    /* reserved[123] */
};
