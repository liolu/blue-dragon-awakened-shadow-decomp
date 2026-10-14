#include "m2c.h"

s32 func_02080634();                                /* extern */

s32 func_02080880(void *arg0) {
    s32 temp_r0;
    s32 var_r0;
    s32 var_r0_2;

    temp_r0 = func_02080634();
    if (temp_r0 == -1) {
        if (M2C_FIELD(arg0, s32 *, 0x94) == -1) {
            var_r0_2 = 1;
        } else {
            var_r0_2 = 0;
        }
        return var_r0_2;
    }
    if (temp_r0 == -2) {
        if (M2C_FIELD(arg0, s32 *, 0xAC) == -1) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    if (M2C_FIELD(((temp_r0 * 0xC) + (s32) arg0), s32 *, 0x10) == -1) {
        return 1;
    }
    return 0;
}
