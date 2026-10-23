/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

s32 func_ov001_02169340(u8 *, M2C_UNK, s32);        /* extern */
extern u8 data_ov001_021953a0;

s32 func_ov001_021685e0(s32 arg0, M2C_UNK arg1) {
    s32 var_r4;
    s32 var_r6;
    s32 var_r5;
    u8 *var_r3;

    var_r4 = 0;
    var_r5 = 0;
    var_r6 = 0;
    var_r3 = &data_ov001_021953a0;
loop_1:
    if (*var_r3 != 0) {
        var_r5 = 1;
    } else {
        var_r3 += 1;
        var_r6 += 1;
        if (var_r6 < 6) {
            goto loop_1;
        }
    }
    if (var_r5 != 0) {
        if (func_ov001_02169340(&data_ov001_021953a0, arg1, 6) != 0) {
            var_r4 = 1;
        }
    } else if (arg0 != 0x1000) {
        var_r4 = 2;
    }
    return var_r4;
}
