#include "m2c.h"

s32 func_02099b94(void *arg0, s32 arg1) {
    s32 var_r3;
    void *var_r0;

    var_r0 = arg0;
    var_r3 = 0;
loop_1:
    if ((M2C_FIELD(var_r0, u8 *, 0x38) & 1) && (arg1 == M2C_FIELD(var_r0, s32 *, 4))) {
        return var_r3;
    }
    var_r3 += 1;
    var_r0 += 0x38;
    if (var_r3 >= 2) {
        return -1;
    }
    goto loop_1;
}
