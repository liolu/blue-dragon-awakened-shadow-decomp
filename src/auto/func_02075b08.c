#include "m2c.h"

M2C_UNK func_0207438c(s32 *);                       /* extern */
s32 func_020745e4(s32);                             /* extern */

void func_02075b08(void *arg0) {
    s32 sp0;
    s32 var_r5;

    var_r5 = M2C_FIELD(arg0, s32 *, 0x7D8);
    if (var_r5 == 0) {
        return;
    }
    sp0 = var_r5;
    if (var_r5 != 0) {
        do {
            var_r5 = func_020745e4(var_r5);
            func_0207438c(&sp0);
            sp0 = var_r5;
        } while (var_r5 != 0);
    }
    M2C_FIELD(arg0, s32 *, 0x7D8) = 0;
}
