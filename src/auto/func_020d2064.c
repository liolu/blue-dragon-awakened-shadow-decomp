#include "m2c.h"

M2C_UNK func_020d1750(s32, s32);                    /* extern */

void func_020d2064(s32 arg0, s32 arg1) {
    s32 var_r4;
    s32 var_r5;
    s32 var_r6;

    var_r6 = arg0;
    var_r5 = arg1 + 8;
    var_r4 = 0;
    do {
        func_020d1750(var_r6, var_r5);
        var_r4 += 1;
        var_r5 += 0x68;
        var_r6 += 0x68;
    } while (var_r4 < 0x17);
}
