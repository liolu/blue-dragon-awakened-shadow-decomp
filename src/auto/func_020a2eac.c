#include "m2c.h"

M2C_UNK MI_CpuFill8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK MI_CpuCopy8(M2C_UNK, void *, M2C_UNK);    /* extern */

void func_020a2eac(void *arg0, M2C_UNK arg1, s8 arg2) {
    if ((s32) M2C_FIELD(arg0, s8 *, 0x38) >= 0) {
        return;
    }
    MI_CpuFill8(arg0, 0, 0x38);
    MI_CpuCopy8(arg1, arg0, 0x38);
    M2C_FIELD(arg0, s8 *, 0x38) = 0;
    M2C_FIELD(arg0, s8 *, 0x39) = 0;
    M2C_FIELD(arg0, s8 *, 0x3A) = arg2;
}
