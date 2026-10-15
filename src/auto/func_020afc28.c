#include "m2c.h"

M2C_UNK func_020af878(void *, s32 *);               /* extern */

void func_020afc28(void *arg0, s32 arg1) {
    s32 *var_r2;
    s32 var_r3;

    if (arg1 == 0) {
        return;
    }
    var_r2 = arg0 + 0x210;
    var_r3 = 0;
loop_3:
    if (*var_r2 == arg1) {
        func_020af878(arg0, var_r2);
        M2C_FIELD(arg0, s32 *, 0x410) = (s32) (M2C_FIELD(arg0, s32 *, 0x410) - 1);
        return;
    }
    var_r3 += 1;
    var_r2 = (s32 *) ((s8 *) var_r2 + 0x20);
    if (var_r3 >= 0x10) {
        return;
    }
    goto loop_3;
}
