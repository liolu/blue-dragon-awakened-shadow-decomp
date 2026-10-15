#include "engine.h"
#include "m2c.h"

M2C_UNK gti2GetBufferFreeSpace(M2C_UNK);
void gti2BufferWriteByte(M2C_UNK, M2C_UNK);
void gti2BufferWriteUShort(M2C_UNK, M2C_UNK);
void gti2BufferWriteData(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK gti2ConnectionMemoryError(M2C_UNK);
M2C_UNK gti2StoreOutgoingReliableMessageInfo(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_020fbc54;

s32 gti2BeginReliableMessage(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 sp0;
    s32 var_r0;
    s32 var_r0_2;
    u16 temp_r1_2;
    void *temp_r1;

    sp0 = arg2 - M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x44);
    if (gti2GetBufferFreeSpace(arg0 + 0x50) < arg2) {
        if (gti2ConnectionMemoryError(arg0) == 0) {
            var_r0_2 = 0;
        } else {
            var_r0_2          = 1;
            *(M2C_UNK *) arg3 = 1;
        }
        return var_r0_2;
    }
    if (gti2StoreOutgoingReliableMessageInfo(arg0, (s32) M2C_FIELD(arg0, u16 *, 0x64), arg2) == 0) {
        if (gti2ConnectionMemoryError(arg0) == 0) {
            var_r0 = 0;
        } else {
            var_r0            = 1;
            *(M2C_UNK *) arg3 = 1;
        }
        return var_r0;
    }
    temp_r1 = M2C_FIELD(arg0, void **, 8);
    if (M2C_FIELD(temp_r1, s32 *, 0x40) == 2) {
        gti2BufferWriteData(arg0 + 0x50, (s32) &sp0, M2C_FIELD(temp_r1, s32 *, 0x44));
    }
    gti2BufferWriteData(arg0 + 0x50, (s32) &data_020fbc54, 2);
    gti2BufferWriteByte(arg0 + 0x50, (s32) (u8) arg1);
    temp_r1_2                    = M2C_FIELD(arg0, u16 *, 0x64);
    M2C_FIELD(arg0, u16 *, 0x64) = (u16) (temp_r1_2 + 1);
    gti2BufferWriteUShort(arg0 + 0x50, (s32) temp_r1_2);
    gti2BufferWriteUShort(arg0 + 0x50, (s32) M2C_FIELD(arg0, u16 *, 0x66));
    *(M2C_UNK *) arg3 = 0;
    return 1;
}
