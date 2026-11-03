/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

void MIi_CpuClear16(u16 value, void *dst, u32 size);
void MI_CpuCopy8(void *src, void *dst, u32 size);

void func_ov001_021695b8(u8 *arg0, u8 *arg1) {
    u16 zero = 0;

    MIi_CpuClear16(zero, arg1 + 0xC, 0x20);
    *(u16 *) (arg1 + 0xA) = (u16) * (u32 *) arg0;
    MI_CpuCopy8(arg0 + 4, arg1 + 0xC, *(u16 *) (arg1 + 0xA));
}
