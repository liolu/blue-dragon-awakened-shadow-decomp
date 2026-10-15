#include "m2c.h"

M2C_UNK MI_CpuFill8(s32, M2C_UNK, M2C_UNK);       /* extern */

void func_020d0590(s32 arg0) {
    MI_CpuFill8(arg0, 0, 0xF00);
    MI_CpuFill8(arg0 + 0xF00, 0, 0x30);
}
