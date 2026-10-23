/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

M2C_UNK memcpy(s32, s32, s32);               /* extern */
M2C_UNK func_ov001_0216bf08(s32, s32, s32, s32, s32); /* extern */
s32 func_ov001_0216b01c(M2C_UNK, s32 *, s32 *);     /* extern */

s32 func_ov001_0216b330(M2C_UNK arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp4;
    s32 sp8;
    s32 temp_r0;

    temp_r0 = func_ov001_0216b01c(arg0, &sp4, &sp8);
    if (temp_r0 == 0) {
        return 0;
    }
    if (sp4 != arg1) {
        return 0;
    }
    if (arg3 != 0) {
        func_ov001_0216bf08(arg2, temp_r0, sp8, arg3, 0x10);
        sp8 -= 8;
    } else {
        memcpy(arg2, temp_r0, sp8);
    }
    return sp8;
}
