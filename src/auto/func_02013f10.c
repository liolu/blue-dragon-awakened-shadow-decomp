#include "m2c.h"

M2C_UNK func_02007a2c(s32, M2C_UNK);                /* extern */
M2C_UNK func_02007a48(s32, u32);                    /* extern */
M2C_UNK func_02012430(M2C_UNK, M2C_UNK);            /* extern */
s32 func_020124a0(M2C_UNK, M2C_UNK, s32, u32);      /* extern */
void *func_020125bc();                              /* extern */
s32 func_02012630(M2C_UNK, M2C_UNK);                /* extern */

s32 func_02013f10(M2C_UNK arg0, s32 arg1, u32 arg2) {
    s32 temp_r0;
    s32 var_r0;
    void *temp_r4;

    temp_r4 = func_020125bc();
    temp_r0 = func_02012630(1, 8);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02007a2c(M2C_FIELD(temp_r4, void **, 4) + 0x10, 4);
    if (M2C_FIELD(M2C_FIELD(temp_r4, void **, 4), s32 *, 0x10) == 1) {
        return 3;
    }
    if (arg2 < 0x10U) {
        return 6;
    }
    if (arg1 == 0) {
        return 6;
    }
    func_02007a48(arg1, arg2);
    func_02012430(0x11, arg0);
    var_r0 = func_020124a0(0x11, 2, arg1, arg2);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
