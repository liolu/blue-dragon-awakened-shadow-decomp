#include "m2c.h"

M2C_UNK func_020af878(void *);                      /* extern */
M2C_UNK func_020afc08(void *, s32);                 /* extern */

void func_020afbac(void *arg0, s32 arg1) {
    s32 *var_r1;
    s32 var_r2;

    if (arg1 == 0) {
        return;
    }
    var_r1 = arg0 + 0xC;
    var_r2 = 0;
loop_3:
    if (*var_r1 == arg1) {
        func_020af878(arg0);
        M2C_FIELD(arg0, s32 *, 0x20C) = (s32) (M2C_FIELD(arg0, s32 *, 0x20C) - 1);
    } else {
        var_r2 += 1;
        var_r1 = (s32 *) ((s8 *) var_r1 + 0x20);
        if (var_r2 < 0x10) {
            goto loop_3;
        }
    }
    func_020afc08(arg0, arg1);
}
