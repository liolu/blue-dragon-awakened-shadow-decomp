#include "m2c.h"

s32 func_020c6e00(s32, s32);                        /* extern */

s32 func_020d95fc(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_r0 == 0) {
        return 0;
    }
    return func_020c6e00(temp_r0, M2C_FIELD(arg0, s32 *, 4));
}
