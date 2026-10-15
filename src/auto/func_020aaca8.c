#include "m2c.h"

void func_020aaca8(void *arg0, s32 arg1) {
    s32 temp_r2;

    temp_r2 = M2C_FIELD(arg0, s32 *, 0x5C);
    if ((temp_r2 != 0) && (temp_r2 != 1)) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x4C) != arg1) {
        M2C_FIELD(arg0, s8 *, 0x3A)  = 1;
        M2C_FIELD(arg0, s32 *, 0x4C) = arg1;
    }
}
