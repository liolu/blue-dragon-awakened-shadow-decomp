#include "m2c.h"

void func_020b3e40(s32 arg0, s32 arg1) {
    s32 temp_r2;

    if (arg1 < 0) {
        return;
    }
    if (arg1 >= 0x18) {
        return;
    }
    temp_r2 = (arg1 * 0x30) + arg0;
    M2C_FIELD(temp_r2, s32 *, 0x2C) = 0;
    M2C_FIELD(temp_r2, s8 *, 0x50) = 0;
    M2C_FIELD(temp_r2, s32 *, 0x54) = -1;
    M2C_FIELD(temp_r2, s8 *, 0x58) = 0;
    M2C_FIELD(temp_r2, s32 *, 0x4C) = 0;
    M2C_FIELD(temp_r2, s8 *, 0x59) = 0;
    M2C_FIELD(temp_r2, s8 *, 0x5A) = 0;
}
