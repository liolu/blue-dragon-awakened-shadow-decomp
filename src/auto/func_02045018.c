#include "m2c.h"

M2C_UNK MIi_CpuCopy32(void *, s32, M2C_UNK);        /* extern */

void func_02045018(s8 arg0, void *arg1, s32 arg2, s32 arg3) {
    u16 temp_lr;
    u8 var_r0;
    void *temp_r3;

    temp_r3                     = arg3 + 0x46C;
    M2C_FIELD(temp_r3, s8 *, 1) = arg0;
    temp_lr                     = M2C_FIELD(arg1, u16 *, 2);
    if (temp_lr & 2) {
        var_r0 = (u8) ((s32) temp_lr >> 2);
    } else {
        var_r0 = ((s32) temp_lr >> 2) + 0x19;
    }
    M2C_FIELD(temp_r3, u8 *, 2) = var_r0;
    M2C_FIELD(temp_r3, u8 *, 3) = (u8) ((M2C_FIELD(temp_r3, u8 *, 3) & ~0x7F) | (arg2 & 0x7F));
    MIi_CpuCopy32(arg1, arg3 + 0xBF0, 0xC0);
}
