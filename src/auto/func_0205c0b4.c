#include "m2c.h"

extern M2C_UNK data_0210f0a0;

s32 func_0205c0b4(s32 arg0, s32 arg1) {
    s32 var_r0;

    var_r0 = arg0;
    if (var_r0 < 0) {
        M2C_FIELD(&data_0210f0a0, s32 *, 4) = var_r0;
        var_r0 = arg1;
    }
    return var_r0;
}
