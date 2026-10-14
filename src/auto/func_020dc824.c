#include "m2c.h"

void func_020dc824(void *arg0) {
    s32 var_r2;
    void *var_r0;

    var_r0 = arg0;
    var_r2 = 0;
    do {
        M2C_FIELD(var_r0, s16 *, 0) = 0;
        M2C_FIELD(var_r0, s32 *, 4) = 0;
        var_r2 += 1;
        M2C_FIELD(var_r0, s32 *, 8) = 0;
        var_r0 += 0xC;
    } while (var_r2 < 0x20);
}
