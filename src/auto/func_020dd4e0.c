#include "m2c.h"

M2C_UNK MI_CpuFill8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020dd198();                            /* extern */

void func_020dd4e0(void *arg0) {
    func_020dd198();
    MI_CpuFill8(arg0 + 0xCC, 0, 0x80);
    MI_CpuFill8(arg0 + 0x14C, 0, 0x80);
    MI_CpuFill8(arg0 + 0x1CC, 0, 0x80);
    M2C_FIELD(arg0, volatile s32 *, 0xC0) = (s32) (arg0 + 0xCC);
    M2C_FIELD(arg0, void **, 0xBC)        = (void *) (arg0 + 0x14C);
    M2C_FIELD(arg0, void **, 0xC4)        = (void *) (arg0 + 0x1CC);
}
