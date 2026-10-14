#include "m2c.h"

s32 func_0203370c();                                /* extern */
s32 func_02033a64();                                /* extern */
M2C_UNK func_02033a8c(M2C_UNK, s32);                /* extern */
s32 func_02034230(M2C_UNK, M2C_UNK *, s32, M2C_UNK, s32); /* extern */
extern M2C_UNK func_020345e0;

s32 func_0203433c(M2C_UNK arg0, s32 arg1, s32 arg2) {
    s32 var_r2;
    s32 var_r4;

    var_r4 = func_02033a64();
    if (var_r4 == 0) {
        if (arg2 == 0) {
            var_r2 = 0;
        } else {
            var_r2 = func_0203370c();
        }
        var_r4 = func_02034230(arg0, &func_020345e0, var_r2, arg0, arg1);
        if ((arg2 != 0) && (var_r4 != 0)) {
            func_02033a8c(arg0, var_r4);
        }
    }
    return var_r4;
}
