#include "m2c.h"

s32 func_02047cc0(s32 arg0) {
    s32 var_r2;
    u8 temp_r1;

    var_r2 = 0;
loop_1:
    temp_r1 = *(s8 *) (arg0 + var_r2);
    if (((u32) temp_r1 < 0x20U) || ((u32) temp_r1 > 0x7EU)) {
        return 0;
    }
    var_r2 += 1;
    if (var_r2 >= 0xA) {
        return 1;
    }
    goto loop_1;
}