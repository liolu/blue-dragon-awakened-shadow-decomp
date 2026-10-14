#include "m2c.h"

void func_020994e0(u8 *arg0) {
    s32 var_r2;
    u8 *var_r0;

    var_r0 = arg0;
    var_r2 = 0;
    do {
        var_r0 += 0x2C;
        var_r2 += 1;
        *var_r0 &= ~2;
    } while (var_r2 < 4);
}
