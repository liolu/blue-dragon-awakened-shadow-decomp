#include "m2c.h"

M2C_UNK func_020d1598(void *);                      /* extern */

void func_020d16c8(void *arg0) {
    s32 var_r4;
    void *var_r5;

    var_r4 = 0;
    var_r5 = arg0;
    M2C_FIELD(var_r5, s32 *, 0x60) = 0;
    M2C_FIELD(var_r5, s16 *, 0x64) = 0;
    M2C_FIELD(var_r5, s8 *, 0x67) = -1;
    M2C_FIELD(var_r5, s8 *, 0x66) = 0;
    do {
        func_020d1598(var_r5);
        var_r4 += 1;
        var_r5 += 0x20;
    } while (var_r4 < 3);
}
