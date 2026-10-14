#include "m2c.h"

M2C_UNK func_020a31e4(s32);                         /* extern */

void func_020a32ac(s32 arg0) {
    s32 var_r4;
    s32 var_r5;

    var_r5 = arg0;
    var_r4 = 0;
    do {
        func_020a31e4(var_r5);
        var_r4 += 1;
        var_r5 += 0x1C;
    } while (var_r4 < 0x20);
}
