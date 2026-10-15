#include "m2c.h"

M2C_UNK MI_CpuCopy8(void *, void *, M2C_UNK);     /* extern */

void func_0209013c(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x1FC) = (s32) M2C_FIELD(arg1, s8 *, 0);
    MI_CpuCopy8(arg1 + 2, arg0 + 0x200, 0xC);
    M2C_FIELD(arg0, s32 *, 0x20C) = (s32) M2C_FIELD(arg1, s8 *, 1);
    MI_CpuCopy8(arg1 + 0xE, arg0 + 0x210, 0xC);
    M2C_FIELD(arg0, s32 *, 0x21C) = (s32) M2C_FIELD(arg1, s8 *, 0x1B);
    MI_CpuCopy8(arg1 + 0x1C, arg0 + 0x220, 0xC);
}
