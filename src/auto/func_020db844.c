#include "m2c.h"

M2C_UNK func_020db56c(s32);                         /* extern */
s32 func_020db7a8();                                /* extern */

void func_020db844(s32 arg0) {
    s32 temp_r0;

    temp_r0 = func_020db7a8();
    if (temp_r0 < 0) {
        return;
    }
    func_020db56c((0x28 * temp_r0) + arg0);
}
