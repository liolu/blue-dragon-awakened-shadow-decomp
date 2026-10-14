#include "m2c.h"

s32 func_0201a164();                         /* extern */
M2C_UNK func_0201a180();                    /* extern */
M2C_UNK func_0201a298();                /* extern */
s32 func_0205cb20();                             /* extern */
M2C_UNK func_0205cb50();                         /* extern */
M2C_UNK func_0206b24c();                    /* extern */
s32 func_0206b2c8();                             /* extern */
s32 func_0206b2e8();                                /* extern */

s32 func_0206b0a0(s32 arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r4;
    s32 temp_r5;

    temp_r0 = func_0206b2e8();
    if (temp_r0 == 0) {
        return 0;
    }
    temp_r5 = func_0206b2c8();
    temp_r4 = func_0201a164();
    temp_r0_2 = func_0205cb20(temp_r4 + func_0201a164(arg2) + 1);
    func_0201a180(temp_r0_2, temp_r5);
    func_0201a298(temp_r0_2, arg2);
    func_0206b24c(temp_r0, temp_r0_2);
    func_0205cb50(temp_r0_2);
    return func_0206b2c8(temp_r0);
}
