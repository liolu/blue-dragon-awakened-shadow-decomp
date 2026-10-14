#include "m2c.h"

s32 func_0209361c(void *, M2C_UNK, u32, M2C_UNK, s32, s32); /* extern */
s32 func_02093a94();                                /* extern */

s32 func_02093640(void *arg0, s32 arg1, M2C_UNK arg2, u32 arg3, s32 arg4) {
    u32 var_r4;

    var_r4 = arg3;
    if (func_02093a94() == 0) {
        return 0;
    }
    if ((s32) M2C_FIELD(arg0, s16 *, 0x82) <= 0) {
        return 0;
    }
    if (var_r4 > 0x3BF4U) {
        var_r4 = 0x3BF4;
    }
    return func_0209361c(arg0, arg2, var_r4, 3, arg1, arg4);
}
