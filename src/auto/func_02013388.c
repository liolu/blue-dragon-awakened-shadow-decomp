#include "m2c.h"

s32 func_020121b0(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02012430(M2C_UNK, M2C_UNK);            /* extern */
s32 func_020124a0(M2C_UNK, M2C_UNK, s32, s32, s32, s32); /* extern */
void *func_020125bc();                              /* extern */

s32 func_02013388(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    s32 temp_r0;
    s32 var_r0;
    void *temp_r0_2;

    temp_r0 = func_020121b0(arg0, arg2);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02012430(0, arg1);
    temp_r0_2 = func_020125bc();
    var_r0 = func_020124a0(0, 4, M2C_FIELD(temp_r0_2, s32 *, 0), M2C_FIELD(temp_r0_2, s32 *, 4), M2C_FIELD(temp_r0_2, s32 *, 0x10), arg3);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
