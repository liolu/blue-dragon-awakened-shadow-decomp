#include "m2c.h"

M2C_UNK MI_CpuFill8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK MATHi_CRC32InitTableRev(M2C_UNK *, s32);              /* extern */
s32 MATH_CalcCRC32(M2C_UNK *, void *, M2C_UNK);      /* extern */
M2C_UNK DWCi_Acc_SetFlag_DataType(void *, M2C_UNK);             /* extern */
M2C_UNK DWCi_Acc_CreateTempLoginId(void *);                      /* extern */

void DWCi_Acc_CreateUserData(void *arg0, s32 arg1) {
    u8 sp0[1024];

    MI_CpuFill8(arg0, 0, 0x40);
    M2C_FIELD(arg0, s32 *, 0)    = 0x40;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = arg1;
    DWCi_Acc_CreateTempLoginId(arg0 + 4);
    DWCi_Acc_SetFlag_DataType(arg0 + 0x10, 0);
    MATHi_CRC32InitTableRev(sp0, 0xEDB88320);
    M2C_FIELD(arg0, s32 *, 0x3C) = MATH_CalcCRC32(sp0, arg0, 0x3C);
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) | 1);
}
