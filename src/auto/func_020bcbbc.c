#include "m2c.h"

s32 func_020bcce8();                                /* extern */

void func_020bcbbc(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r4;

    var_r4 = arg1;
    temp_r0 = func_020bcce8();
    if (temp_r0 < var_r4) {
        M2C_FIELD(arg0, s32 *, 0xC) = temp_r0;
        return;
    }
    if (var_r4 < 0) {
        var_r4 = 0;
    }
    M2C_FIELD(arg0, s32 *, 0xC) = var_r4;
}
