/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

s32 func_ov001_0216d704(s8 *arg0, s8 arg1) {
    s32 var_r5;
    s32 var_r3;
    s8 *var_r2;
    u8 temp_r4;

    var_r2  = arg0;
    temp_r4 = arg1;
    var_r3  = (s32) (temp_r4 & 0xF0) >> 4;
    var_r5  = 0;
    do {
        if (var_r3 <= 9) {
            *var_r2 = var_r3 + 0x30;
            var_r2 += 1;
        } else {
            *var_r2 = var_r3 + 0x37;
            var_r2 += 1;
        }
        var_r3 = temp_r4 & 0xF;
        var_r5 += 1;
    } while (var_r5 < 2);
    *var_r2 = 0;
    return var_r2 - arg0;
}
