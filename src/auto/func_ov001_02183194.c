#include "m2c.h"

M2C_UNK func_ov001_02186b4c(M2C_UNK, s32, M2C_UNK *, s32 *); /* extern */
M2C_UNK func_ov001_021868d8(M2C_UNK, s32, s32, s32); /* extern */
s32 func_ov001_021868d0();                          /* extern */

void func_ov001_02183194(M2C_UNK arg0, s32 arg1) {
    M2C_UNK sp0;
    s32 sp4;
    s32 temp_r0;
    s32 var_r2;
    s32 var_r7;

    temp_r0 = func_ov001_021868d0();
    var_r7  = 0;
    if (temp_r0 <= 0) {
        return;
    }
    do {
        func_ov001_02186b4c(arg0, var_r7, &sp0, &sp4);
        if ((sp4 >= arg1) && (sp4 < 0xC0)) {
            var_r2 = 0;
        } else {
            var_r2 = 0x200;
        }
        func_ov001_021868d8(arg0, var_r7, var_r2, 0);
        var_r7 += 1;
    } while (var_r7 < temp_r0);
}
