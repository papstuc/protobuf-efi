/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: test.proto */

#ifndef PROTOBUF_C_test_2eproto__INCLUDED
#define PROTOBUF_C_test_2eproto__INCLUDED

#include <protobuf-efi.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1004001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct ProtoTest ProtoTest;


/* --- enums --- */


/* --- messages --- */

struct  ProtoTest
{
  ProtobufCMessage base;
  uint32_t size;
};
#define PROTO_TEST__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&proto_test__descriptor) \
    , 0 }


/* ProtoTest methods */
void   proto_test__init
                     (ProtoTest         *message);
size_t proto_test__get_packed_size
                     (const ProtoTest   *message);
size_t proto_test__pack
                     (const ProtoTest   *message,
                      uint8_t             *out);
size_t proto_test__pack_to_buffer
                     (const ProtoTest   *message,
                      ProtobufCBuffer     *buffer);
ProtoTest *
       proto_test__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   proto_test__free_unpacked
                     (ProtoTest *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*ProtoTest_Closure)
                 (const ProtoTest *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor proto_test__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_test_2eproto__INCLUDED */
