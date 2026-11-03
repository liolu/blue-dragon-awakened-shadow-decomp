/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

s32 func_ov001_0216b08c(u32 *arg0, u32 arg1, s32 *arg2, s32 *arg3) {
    s32 temp_r0;
    u16 temp_r1;
    u16 temp_r1_2;
    u32 temp_r0_2;

    temp_r0_2 = *arg0;
    if (temp_r0_2 >= arg1) {
        return 0;
    }
    temp_r1   = M2C_FIELD(temp_r0_2, u16 *, 0);
    *arg2     = (s32) (u16) ((u8) ((s32) temp_r1 >> 8) | ((temp_r1 << 8) & 0xFF00));
    temp_r1_2 = M2C_FIELD(temp_r0_2, u16 *, 2);
    *arg3     = (s32) (u16) ((u8) ((s32) temp_r1_2 >> 8) | ((temp_r1_2 << 8) & 0xFF00));
    temp_r0   = temp_r0_2 + 4;
    *arg0     = temp_r0 + (((*arg3 + 0xB) & ~7) - 4);
    return temp_r0;
}
