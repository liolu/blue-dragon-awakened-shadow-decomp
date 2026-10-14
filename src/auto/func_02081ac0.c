#include "m2c.h"

M2C_UNK func_020321cc(void *);                      /* extern */

u8 *func_02081ac0(u8 *arg0) {
    s32 var_r4;
    u8 *var_r5;

    var_r5 = arg0;
    var_r4 = 0;
    do {
        if (*var_r5 != 0) {
            func_020321cc(var_r5 + 4);
        }
        var_r4 += 1;
        var_r5 += 0x28;
    } while (var_r4 < 0x10);
    return arg0;
}
