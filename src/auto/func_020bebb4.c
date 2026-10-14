#include "m2c.h"

s32 func_020bec48(void *);                          /* extern */
s32 func_020bec54(void *);                          /* extern */
s32 func_020bf2cc();                                /* extern */
s32 func_020c1908(s32, u32, M2C_UNK, M2C_UNK, s32, s32); /* extern */

s32 func_020bebb4(void *arg0, u32 arg1, M2C_UNK arg2, M2C_UNK arg3, u8 arg4, u8 arg5) {
    M2C_UNK var_r4;
    M2C_UNK var_r5;
    s32 temp_r0;
    s32 temp_r4;
    u32 var_r6;

    var_r6 = arg1;
    var_r5 = arg2;
    var_r4 = arg3;
    if ((func_020bf2cc() != 0) && (var_r6 <= 1U)) {
        temp_r4 = func_020bec48(arg0);
        temp_r0 = func_020bec54(arg0);
        if ((temp_r4 != 0xC) && (temp_r0 != 0xC)) {
            var_r5 = 0;
            var_r4 = 0;
            var_r6 = 0xC;
            goto block_7;
        }
        return temp_r0;
    }
block_7:
    if (func_020c1908(M2C_FIELD(arg0, s32 *, 0x10), var_r6, var_r5, var_r4, (s32) arg4, (s32) arg5) != 0) {
        return 1;
    }
    return 0;
}
