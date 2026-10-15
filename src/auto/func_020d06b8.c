#include "m2c.h"

s32 func_020d05b8();                                /* extern */
s8 func_020d05e4(s32);                              /* extern */
s32 func_020d063c(s32);                             /* extern */

s32 func_020d06b8(s32 arg0, s8 arg1) {
    s32 temp_r0;
    s32 temp_r0_2;
    s8 temp_r0_3;
    void *temp_r2;

    temp_r0 = func_020d05b8();
    if (temp_r0 < 0) {
        return -1;
    }
    temp_r0_2 = func_020d063c(arg0);
    if (temp_r0_2 < 0) {
        return -1;
    }
    temp_r0_3 = func_020d05e4(arg0);
    if ((s32) (temp_r0_3 + arg1) > 0x40) {
        return -1;
    }
    temp_r2                          = arg0 + (temp_r0 * 8);
    M2C_FIELD(temp_r2, s8 *, 0xF01)  = arg1;
    M2C_FIELD(temp_r2, s8 *, 0xF02)  = (s8) temp_r0_2;
    M2C_FIELD(temp_r2, s8 *, 0xF00)  = temp_r0_3;
    M2C_FIELD(temp_r2, s32 *, 0xF04) = 0;
    return temp_r0;
}
