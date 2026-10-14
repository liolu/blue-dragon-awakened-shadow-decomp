#include "m2c.h"

M2C_UNK func_02012430(M2C_UNK, M2C_UNK);            /* extern */
s32 func_020124a0(M2C_UNK, M2C_UNK);                /* extern */
s32 func_020125e8();                                /* extern */

s32 func_020133e8(M2C_UNK arg0) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = func_020125e8();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02012430(1, arg0);
    var_r0 = func_020124a0(1, 0);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
