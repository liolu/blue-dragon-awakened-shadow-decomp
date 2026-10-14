#include "m2c.h"

s32 func_0205c1f8(s32, M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */
M2C_UNK func_02075dcc(void *);                      /* extern */
s32 func_020762f0(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_020765d4(void *);                      /* extern */

s32 func_0207624c(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 var_r7;

    var_r7 = 1;
loop_1:
    var_r7 -= 1;
    temp_r0_2 = func_0205c1f8(M2C_FIELD(arg0, s32 *, 0x6B4), arg1, arg2, 0);
    if ((temp_r0_2 <= 0) && (var_r7 >= 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x80) <= 0)) {
        func_020765d4(arg0);
        temp_r0 = func_020762f0(arg0, 0, 0, 2, 0);
        if (temp_r0 != 0) {
            func_02075dcc(arg0);
            return temp_r0;
        }
        if (var_r7 < 0) {
            goto block_7;
        }
        goto loop_1;
    }
block_7:
    if (temp_r0_2 <= 0) {
        return 3;
    }
    return 0;
}
