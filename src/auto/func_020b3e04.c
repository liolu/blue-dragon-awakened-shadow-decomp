#include "m2c.h"

s32 func_020b3e04(void *arg0) {
    s32 var_r2;
    void *var_r0;

    var_r0 = arg0;
    if (M2C_FIELD(var_r0, s32 *, 0x47C) != 0) {
        return -1;
    }
    var_r2 = 0;
loop_3:
    if (M2C_FIELD(var_r0, s32 *, 0x2C) == 0) {
        return var_r2;
    }
    var_r2 += 1;
    var_r0 += 0x30;
    if (var_r2 >= 0x18) {
        return -1;
    }
    goto loop_3;
}
