#include "m2c.h"

s32 func_ov000_021bdc9c(M2C_UNK);                   /* extern */

s32 func_020b99d0(void *arg0) {
    s16 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s16 *, 0x14);
    if (func_ov000_021bdc9c(0x64) < (s32) temp_r4) {
        return 1;
    }
    return 0;
}
