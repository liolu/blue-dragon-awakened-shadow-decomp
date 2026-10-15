#include "m2c.h"

s32 func_020dc870(u16 *arg0) {
    s32 var_r2;
    u16 *var_r0;

    var_r0 = arg0;
    var_r2 = 0;
loop_1:
    if (*var_r0 == 0) {
        return var_r2;
    }
    var_r2 += 1;
    var_r0 = (u16 *) ((s8 *) var_r0 + 0xC);
    if (var_r2 >= 0x20) {
        return -1;
    }
    goto loop_1;
}
