#include "m2c.h"

s32 func_020b4f78(s32 arg0, s32 arg1) {
    s32 temp_r2;

    temp_r2 = (arg1 * 0x30) + arg0;
    if (((s32) M2C_FIELD(temp_r2, s32 *, 0x40) < 0) && (M2C_FIELD(temp_r2, s32 *, 0x34) == M2C_FIELD(temp_r2, s32 *, 0x48))) {
        return 1;
    }
    return 0;
}
