#include "m2c.h"

s32 func_020bcca8();                                /* extern */

void func_020bcb90(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r4;

    var_r4 = arg1;
    temp_r0 = func_020bcca8();
    if (temp_r0 < var_r4) {
        M2C_FIELD(arg0, s32 *, 8) = temp_r0;
        return;
    }
    if (var_r4 <= 0) {
        var_r4 = 0;
    }
    M2C_FIELD(arg0, s32 *, 8) = var_r4;
}
