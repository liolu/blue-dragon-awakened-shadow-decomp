#include "m2c.h"

M2C_UNK func_020db594(s32, M2C_UNK);                /* extern */
s32 func_020db7a8();                                /* extern */

void func_020db8c0(s32 arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_r0;

    temp_r0 = func_020db7a8();
    if (temp_r0 < 0) {
        return;
    }
    func_020db594((0x28 * temp_r0) + arg0, arg2);
}
