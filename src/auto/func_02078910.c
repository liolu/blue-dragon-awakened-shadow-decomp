#include "m2c.h"

s32 func_020171c0(M2C_UNK *, s32 *, M2C_UNK, s32 *, s32); /* extern */
extern M2C_UNK data_0210fd6c;

M2C_UNK *func_02078910(M2C_UNK arg0) {
    s32 sp8;
    s32 sp4;
    M2C_UNK *var_r3;
    s32 temp_r0;

    sp8 = 0xFF;
    sp4 = 0x100;
    temp_r0 = func_020171c0(&data_0210fd6c, &sp8, arg0, &sp4, 0);
    var_r3 = &data_0210fd6c;
    ((s8 *)&data_0210fd6c)[sp8] = 0;
    if (temp_r0 != 0) {
        var_r3 = NULL;
    }
    return var_r3;
}
