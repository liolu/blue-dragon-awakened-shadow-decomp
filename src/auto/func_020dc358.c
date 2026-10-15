#include "m2c.h"

M2C_UNK MI_CpuFill8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020dbe68();                            /* extern */

void func_020dc358(void *arg0) {
    func_020dbe68();
    MI_CpuFill8(arg0 + 0xD0, 0, 0x20);
    MI_CpuFill8(arg0 + 0xF0, 0, 0x20);
    MI_CpuFill8(arg0 + 0x110, 0, 0x20);
    M2C_FIELD(arg0, volatile s32 *, 0xC4) = (s32) (arg0 + 0xD0);
    M2C_FIELD(arg0, void **, 0xC0)        = (void *) (arg0 + 0xF0);
    M2C_FIELD(arg0, void **, 0xC8)        = (void *) (arg0 + 0x110);
}
