#include "m2c.h"

s32 func_020d1334(void *arg0) {
    s32 var_r2;
    void *var_r0;

    var_r0 = arg0;
    var_r2 = 0;
loop_1:
    if (M2C_FIELD(var_r0, s32 *, 0xC) == 0) {
        return var_r2;
    }
    var_r2 += 1;
    var_r0 += 0x14;
    if (var_r2 >= 0x10) {
        return -1;
    }
    goto loop_1;
}
