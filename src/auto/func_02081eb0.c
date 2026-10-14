#include "m2c.h"

s32 func_02081eb0(u8 *arg0) {
    s32 var_r2;
    u8 *var_r0;

    var_r0 = arg0;
    var_r2 = 0;
loop_1:
    if (*var_r0 != 0) {
        return 1;
    }
    var_r2 += 1;
    var_r0 += 0x28;
    if (var_r2 >= 0x10) {
        return 0;
    }
    goto loop_1;
}
