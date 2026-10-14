#include "m2c.h"

M2C_UNK func_020321c0(s32);                         /* extern */

s8 *func_02081a8c(s8 *arg0) {
    s32 temp_r0;
    s32 var_r5;
    s8 *var_r6;

    var_r5 = 0;
    var_r6 = arg0;
    do {
        temp_r0 = var_r6 + 4;
        *var_r6 = 0;
        var_r6 += 0x28;
        func_020321c0(temp_r0);
        var_r5 += 1;
    } while (var_r5 < 0x10);
    return arg0;
}
