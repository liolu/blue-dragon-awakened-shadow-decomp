#include "m2c.h"

s32 func_020d06b8(s32, s32);                        /* extern */
M2C_UNK func_020d0720(s32, s32);                    /* extern */
s16 func_020d093c(s32, s32);                        /* extern */
s32 func_020d096c(s32);                             /* extern */
s32 func_020d0998();                                /* extern */
s32 func_ov000_02172c6c(s32);                       /* extern */

s32 func_020d0a74(s32 arg0, s32 arg1) {
    s16 temp_r0_3;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r2;

    if (func_020d0998() >= 0) {
        return 0;
    }
    temp_r0 = func_020d096c(arg0);
    if (temp_r0 < 0) {
        return 0;
    }
    temp_r0_2 = func_020d06b8(arg0, func_ov000_02172c6c(arg1));
    if (temp_r0_2 == -1) {
        return 0;
    }
    temp_r0_3 = func_020d093c(arg0, arg1);
    if (temp_r0_3 == -1) {
        func_020d0720(arg0, temp_r0_2);
        return 0;
    }
    temp_r2 = (temp_r0 * 0x18) + arg0;
    M2C_FIELD(temp_r2, s16 *, 0xF30) = temp_r0_3;
    M2C_FIELD(temp_r2, s32 *, 0xF34) = temp_r0_2;
    M2C_FIELD(temp_r2, s32 *, 0xF38) = arg1;
    return 1;
}
