#include "m2c.h"

M2C_UNK MI_CpuCopy8(s32, s32, s32);               /* extern */

void func_020d0670(s32 arg0, void *arg1, s32 arg2) {
    u8 temp_r1;

    temp_r1 = M2C_FIELD(arg1, u8 *, 0);
    MI_CpuCopy8((temp_r1 * 0x3C) + arg0, ((temp_r1 - arg2) * 0x3C) + arg0, arg2 * 0x3C);
    M2C_FIELD(arg1, u8 *, 2) = (u8) (M2C_FIELD(arg1, u8 *, 2) - 1);
    M2C_FIELD(arg1, u8 *, 0) = (u8) (M2C_FIELD(arg1, u8 *, 0) - arg2);
}
