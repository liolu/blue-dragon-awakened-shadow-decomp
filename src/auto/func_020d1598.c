#include "m2c.h"

M2C_UNK MI_CpuFill8(void *, M2C_UNK, M2C_UNK);    /* extern */

void func_020d1598(void *arg0) {
    MI_CpuFill8(arg0, 0, 0x18);
    M2C_FIELD(arg0, s8 *, 0x18)  = -1;
    M2C_FIELD(arg0, s8 *, 0x19)  = 0;
    M2C_FIELD(arg0, s8 *, 0x1A)  = 0;
    M2C_FIELD(arg0, s8 *, 0x1B)  = 0;
    M2C_FIELD(arg0, s16 *, 0x1C) = 0;
    M2C_FIELD(arg0, s8 *, 0x1E)  = -1;
}
