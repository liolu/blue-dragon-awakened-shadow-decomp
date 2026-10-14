#include "m2c.h"

s32 func_020cebec(s32, s32, s32, u8);               /* extern */

s32 func_020d940c(void *arg0) {
    s32 temp_r0;
    s32 temp_r1;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_r0 == 0) {
        return 0;
    }
    temp_r1 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r1 == 0) {
        return 0;
    }
    return func_020cebec(temp_r0, temp_r1, M2C_FIELD(arg0, s32 *, 8), (u8) M2C_FIELD(arg0, s32 *, 0xC));
}
