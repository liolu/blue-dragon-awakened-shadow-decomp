#include "m2c.h"

M2C_UNK MI_CpuCopy8(M2C_UNK, s32, M2C_UNK);       /* extern */

s32 func_02090674(void *arg0, s32 arg1, M2C_UNK arg2, s8 arg3) {
    s32 temp_ip;

    temp_ip = M2C_FIELD(arg0, s32 *, 0x1C8);
    if (temp_ip >= 0x1C) {
        return 0;
    }
    MI_CpuCopy8(arg2, (temp_ip * 0x60) + (s32) (arg0 + 0x1CC), 0x5E);
    M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x1C8) * 0x60) + (s32) arg0), s16 *, 0x22A) = 0;
    M2C_FIELD((arg0 + (M2C_FIELD(arg0, s32 *, 0x1C8) * 4)), s32 *, 0xCAC)          = arg1;
    M2C_FIELD((arg0 + M2C_FIELD(arg0, s32 *, 0x1C8)), s8 *, 0xD1C)                 = arg3;
    M2C_FIELD(arg0, s32 *, 0x1C8)                                                  = (s32) (M2C_FIELD(arg0, s32 *, 0x1C8) + 1);
    return 1;
}
