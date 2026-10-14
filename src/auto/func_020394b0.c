#include "m2c.h"

M2C_UNK func_02037f88();                            /* extern */
M2C_UNK func_02037fb4(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_02038014();                            /* extern */
M2C_UNK func_02038048();                            /* extern */
s32 func_02038f94();                                /* extern */
s32 func_02039160(s32, s32);                        /* extern */

s32 func_020394b0(void) {
    s32 temp_r0;
    s32 var_r5;

    func_02038014();
    func_02037f88();
    func_02037fb4(0x44, 0x43, -1);
    var_r5 = 0;
loop_1:
    temp_r0 = func_02039160(func_02038f94(), var_r5);
    if (temp_r0 != 1) {
        var_r5 += 1;
        if (var_r5 < 4) {
            goto loop_1;
        }
    }
    func_02038048();
    if (temp_r0 == 1) {
        return 1;
    }
    return 0;
}
