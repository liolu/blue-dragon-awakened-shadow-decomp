#include "m2c.h"

M2C_UNK func_02012430(M2C_UNK, M2C_UNK);            /* extern */
s32 func_020124a0(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02012630(M2C_UNK, M2C_UNK);                /* extern */

s32 func_02013874(M2C_UNK arg0) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = func_02012630(1, 5);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02012430(0xB, arg0);
    var_r0 = func_020124a0(0xB, 0);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
