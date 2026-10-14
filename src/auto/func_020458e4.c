#include "m2c.h"

s32 func_020449a8(M2C_UNK);                         /* extern */
s32 func_02045784(s32);                             /* extern */

s32 func_020458e4(void) {
    if (func_02045784(func_020449a8(1) + 0xA) == 1) {
        return 0x12;
    }
    return 0x11;
}
