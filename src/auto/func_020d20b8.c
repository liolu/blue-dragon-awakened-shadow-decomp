#include "m2c.h"

s32 func_020d20b8(void *arg0) {
    s32 var_r2;
    void *var_r0;

    var_r0 = arg0;
    var_r2 = 0;
loop_1:
    if ((var_r2 != 5) && ((s32) M2C_FIELD(var_r0, u16 *, 0x64) <= 0)) {
        return 0;
    }
    var_r2 += 1;
    var_r0 += 0x68;
    if (var_r2 >= 0x17) {
        return 1;
    }
    goto loop_1;
}
