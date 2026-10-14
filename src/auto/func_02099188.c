#include "m2c.h"

M2C_UNK func_020991d4(void *, s32);                 /* extern */

void func_02099188(void *arg0) {
    s32 var_r4;
    void *var_r5;

    var_r5 = arg0;
    var_r4 = 0;
    do {
        if (M2C_FIELD(var_r5, u8 *, 0x2C) & 1) {
            func_020991d4(arg0, M2C_FIELD(var_r5, s32 *, 4));
        }
        var_r4 += 1;
        var_r5 += 0x2C;
    } while (var_r4 < 4);
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s16 *, 0xB4) = -1;
}
