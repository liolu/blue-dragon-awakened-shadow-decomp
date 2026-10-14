#include "m2c.h"

s32 func_020c6e30(s32, s32);                        /* extern */

s32 func_020d9620(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_r0 == 0) {
        return 0;
    }
    return func_020c6e30(temp_r0, M2C_FIELD(arg0, s32 *, 4));
}
