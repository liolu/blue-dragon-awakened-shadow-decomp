#include "m2c.h"
extern u8 *data_ov001_02196c48;
void MI_CpuFill8(void *, s32, s32);
void func_ov001_02181394(s32);
void func_ov001_021812a8(s32 a) {
    u8 *p = data_ov001_02196c48 + (a << 8);
    MI_CpuFill8(p, 0, 0xEF);
    p[0xE7] = 0xFF;
    func_ov001_02181394(a);
}
