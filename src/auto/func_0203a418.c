#include "m2c.h"

s32 func_0203beb4(s32);                             /* extern */

s32 func_0203a418(s32 arg0, void *arg1, s32 arg2) {
    s32 temp_r4;
    s32 var_r0;

    var_r0 = arg0;
    temp_r4 = var_r0;
    if (arg2 == 0) {
        var_r0 = 0;
    }
    M2C_FIELD(arg1, s32 *, 4) = var_r0;
    M2C_FIELD(arg1, s32 *, 0) = arg2;
    return temp_r4 + func_0203beb4(arg2);
}
