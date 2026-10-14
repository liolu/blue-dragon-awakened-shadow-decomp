#include "m2c.h"

M2C_UNK func_0209f120(s32, s32, M2C_UNK);           /* extern */
s32 func_020a2b64(M2C_UNK, s32);                    /* extern */

void func_020a2b9c(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 var_r4;

    var_r4 = 1;
    do {
        temp_r0 = func_020a2b64(arg0, var_r4);
        if (temp_r0 != 0) {
            func_0209f120(temp_r0, var_r4, arg1);
        }
        var_r4 += 1;
    } while (var_r4 < 0x14);
}
