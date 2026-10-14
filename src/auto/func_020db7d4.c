#include "m2c.h"

M2C_UNK func_020db594(s32, M2C_UNK);                /* extern */
M2C_UNK func_020db59c(s32, M2C_UNK);                /* extern */
s32 func_020db77c(s32);                             /* extern */
s32 func_020db7a8();                                /* extern */

s32 func_020db7d4(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r4;

    temp_r0 = func_020db7a8();
    if (temp_r0 >= 0) {
        func_020db59c((0x28 * temp_r0) + arg0, arg2);
        return 1;
    }
    temp_r0_2 = func_020db77c(arg0);
    if (temp_r0_2 < 0) {
        return 0;
    }
    temp_r4 = temp_r0_2 * 0x28;
    func_020db594(arg0 + temp_r4, arg1);
    func_020db59c(arg0 + temp_r4, arg2);
    return 1;
}
