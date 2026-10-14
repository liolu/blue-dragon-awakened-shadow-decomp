#include "m2c.h"

M2C_UNK func_0209df38(s32, s32);                    /* extern */

void func_0209e264(s32 arg0) {
    s32 var_r4;
    s32 var_r5;

    var_r5 = arg0 + 0x168;
    var_r4 = 0;
    do {
        func_0209df38(var_r5, arg0);
        var_r4 += 1;
        var_r5 += 0x10;
    } while (var_r4 < 3);
}
