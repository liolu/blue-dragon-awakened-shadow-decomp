#include "m2c.h"

M2C_UNK MATHi_CRC32InitTableRev(M2C_UNK *, s32);              /* extern */
s32 MATH_CalcCRC32(M2C_UNK *, void *, M2C_UNK);      /* extern */

void DWCi_Acc_ClearDirty(void *arg0) {
    u8 sp0[1024];

    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) & ~1);
    MATHi_CRC32InitTableRev(sp0, 0xEDB88320);
    M2C_FIELD(arg0, s32 *, 0x3C) = MATH_CalcCRC32(sp0, arg0, 0x3C);
}
