#include "m2c.h"

s32 func_02082860(void *arg0) {
    s32 var_r2;
    void *var_r0;

    var_r0 = arg0;
    var_r2 = 0;
loop_1:
    if (M2C_FIELD(var_r0, s32 *, 4) != 0) {
        return 0;
    }
    var_r2 += 1;
    var_r0 += 0xC;
    if (var_r2 >= 0x10) {
        return 1;
    }
    goto loop_1;
}
