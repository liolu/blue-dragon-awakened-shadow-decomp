#include "m2c.h"

M2C_UNK func_02007a48(s32, M2C_UNK);                /* extern */
M2C_UNK func_02012430(M2C_UNK, M2C_UNK);            /* extern */
s32 func_020124a0(M2C_UNK, M2C_UNK, u32, s32);      /* extern */
s32 func_020125e8();                                /* extern */

s32 func_02014c90(M2C_UNK arg0, u32 arg1, s32 arg2) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = func_020125e8();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    if (arg1 > 3U) {
        return 6;
    }
    if (arg1 != 0) {
        if (arg2 == 0) {
            return 6;
        }
        func_02007a48(arg2, 0x50);
        goto block_8;
    }
block_8:
    func_02012430(0x14, arg0);
    var_r0 = func_020124a0(0x14, 2, arg1, arg2);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
