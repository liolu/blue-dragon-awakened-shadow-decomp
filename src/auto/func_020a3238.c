#include "m2c.h"

s32 func_020a3238(void *arg0) {
    s32 var_r2;
    void *var_r0;

    var_r0 = arg0;
    var_r2 = 0;
loop_1:
    if ((s32) M2C_FIELD(var_r0, s8 *, 0x18) <= 0) {
        return var_r2;
    }
    var_r2 += 1;
    var_r0 += 0x1C;
    if (var_r2 >= 0x20) {
        return -1;
    }
    goto loop_1;
}
