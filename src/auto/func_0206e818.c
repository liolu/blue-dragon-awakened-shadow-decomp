#include "m2c.h"

s32 func_0206ca48(void *, s32, M2C_UNK, M2C_UNK, s32, s32, s32, s32); /* extern */
s32 func_0206d528(s32, M2C_UNK, M2C_UNK);           /* extern */
s32 func_0206f3a8();                                /* extern */

s32 func_0206e818(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    s32 temp_r4;

    temp_r4 = func_0206f3a8();
    if ((M2C_FIELD(arg0, s32 *, 0x2C) != 0) && (func_0206ca48(arg0, temp_r4, arg1, arg2, 1, 0, 0, arg3) == 0)) {
        return 0;
    }
    if (temp_r4 == 0) {
        return 1;
    }
    if (func_0206d528(temp_r4, 6, 1) != 0) {
        return 1;
    }
    return 0;
}
