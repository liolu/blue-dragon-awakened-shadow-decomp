#include "m2c.h"

s32 func_020d1ee8(void *arg0) {
    s8 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s8 *, 0x958);
    if (((s32) temp_r1 <= -1) || ((s32) temp_r1 > 0x17)) {
        return 0;
    }
    return 1;
}
