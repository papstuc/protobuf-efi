#include <Uefi.h>
#include <Library/UefiLib.h>
#include <Library/MemoryAllocationLib.h>
#include <Library/BaseMemoryLib.h>

#include "test.pb-c.h"

EFI_STATUS EFIAPI uefi_main(EFI_HANDLE image_handle, EFI_SYSTEM_TABLE* system_table)
{
    ProtoTest proto_test;
    proto_test__init(&proto_test);

    proto_test.size = 0xDEADBEEF;

    size_t packed_size = proto_test__get_packed_size(&proto_test);

    void* packed_buffer = AllocatePool(packed_size);
    proto_test__pack(&proto_test, packed_buffer);

    ProtoTest* unpacked_proto_test = proto_test__unpack(NULL, packed_size, packed_buffer);

    if (!unpacked_proto_test)
    {
        Print(L"failed to unpack data\n");
        FreePool(packed_buffer);

        return EFI_ABORTED;
    }

    Print(L"unpacked size: %u\n", unpacked_proto_test->size);

    proto_test__free_unpacked(unpacked_proto_test, 0);
    FreePool(packed_buffer);

    return EFI_SUCCESS;
}