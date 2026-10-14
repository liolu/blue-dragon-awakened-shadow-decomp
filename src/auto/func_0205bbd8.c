#include "m2c.h"

s32 func_0205b8ac();                                /* extern */
M2C_UNK func_0205ba28(M2C_UNK, s32);                /* extern */

void func_0205bbd8(M2C_UNK arg0) {
    s32 var_r4;

    var_r4 = func_0205b8ac() - 1;
    if (var_r4 < 0) {
        return;
    }
    do {
        func_0205ba28(arg0, var_r4);
        var_r4 -= 1;
    } while (var_r4 >= 0);
}
