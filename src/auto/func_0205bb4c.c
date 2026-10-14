#include "m2c.h"

s32 func_0205b8b4(s32 *, s32);                      /* extern */

void func_0205bb4c(s32 *arg0, M2C_UNK (*arg1)(s32, M2C_UNK), M2C_UNK arg2) {
    s32 var_r4;

    var_r4 = *arg0 - 1;
    if (var_r4 < 0) {
        return;
    }
    do {
        arg1(func_0205b8b4(arg0, var_r4), arg2);
        var_r4 -= 1;
    } while (var_r4 >= 0);
}
