#include "m2c.h"

s32 ArrayNth(s32 *, s32);                      /* extern */

void ArrayMapBackwards(s32 *arg0, M2C_UNK (*arg1)(s32, M2C_UNK), M2C_UNK arg2) {
    s32 var_r4;

    var_r4 = *arg0 - 1;
    if (var_r4 < 0) {
        return;
    }
    do {
        arg1(ArrayNth(arg0, var_r4), arg2);
        var_r4 -= 1;
    } while (var_r4 >= 0);
}
