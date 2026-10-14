#include "m2c.h"

s32 func_02093a94(M2C_UNK);                         /* extern */
s32 func_02093c44(M2C_UNK, s32);                    /* extern */
s32 func_02093dd0(M2C_UNK, s32);                    /* extern */
s32 func_02094148(M2C_UNK, M2C_UNK, u32, M2C_UNK, s32, s32); /* extern */

s32 func_02094244(M2C_UNK arg0, s32 arg1, M2C_UNK arg2, u32 arg3, s32 arg4) {
    u32 var_r4;

    var_r4 = arg3;
    if (var_r4 > 0x3BF4U) {
        var_r4 = 0x3BF4;
    }
    if (func_02093a94(arg0) == 0) {
        return 0;
    }
    if (func_02093c44(arg0, arg1) == 0) {
        return 0;
    }
    if (func_02093dd0(arg0, arg1) == 0) {
        return 0;
    }
    return func_02094148(arg0, arg2, var_r4, 3, arg1, arg4);
}
