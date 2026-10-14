#include "m2c.h"

s32 func_020d0998(void *arg0, s32 arg1) {
    s32 var_r3;
    void *var_r0;

    var_r0 = arg0;
    var_r3 = 0;
loop_1:
    if (M2C_FIELD(var_r0, s32 *, 0xF38) == arg1) {
        return var_r3;
    }
    var_r3 += 1;
    var_r0 += 0x18;
    if (var_r3 >= 6) {
        return -1;
    }
    goto loop_1;
}
