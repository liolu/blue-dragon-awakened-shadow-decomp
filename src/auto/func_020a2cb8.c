#include "m2c.h"

M2C_UNK func_0209fff8(s32, M2C_UNK, s32);           /* extern */
s32 func_020a2b7c(M2C_UNK, s32);                    /* extern */

void func_020a2cb8(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 var_r4;

    var_r4 = 1;
    do {
        temp_r0 = func_020a2b7c(arg0, var_r4);
        if (temp_r0 != 0) {
            func_0209fff8(temp_r0, arg1, var_r4);
        }
        var_r4 += 1;
    } while (var_r4 < 0x14);
}
