#include "m2c.h"

M2C_UNK func_02099a7c(s32, M2C_UNK);                /* extern */
s32 func_02099dd4();                                /* extern */
s32 func_02099e10(s32);                             /* extern */

s32 func_02099e40(s32 arg0, M2C_UNK arg1) {
    s32 var_r4;

    var_r4 = func_02099dd4();
    if (var_r4 == -1) {
        var_r4 = func_02099e10(arg0);
    }
    if (var_r4 != -1) {
        func_02099a7c((var_r4 * 0x78) + arg0, arg1);
    }
    return var_r4;
}
