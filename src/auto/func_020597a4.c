#include "m2c.h"

s32 func_0204e274();                                /* extern */
s32 func_02059714(u8, M2C_UNK, M2C_UNK);            /* extern */

s32 func_020597a4(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 var_r10;
    s32 var_r6;
    u8 var_r9;

    var_r6 = arg0;
    var_r9 = 0;
    do {
        if (var_r9 != 0) {
            var_r10 = 1 << var_r9;
        } else {
            var_r10 = 1;
        }
        if ((var_r6 & var_r10) && (var_r9 != func_0204e274()) && (func_02059714(var_r9, arg1, arg2) == 0)) {
            var_r6 &= ~var_r10;
        }
        var_r9 += 1;
    } while ((u32) var_r9 < 0x20U);
    return var_r6;
}
