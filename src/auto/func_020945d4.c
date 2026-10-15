#include "m2c.h"

void func_020945d4(void *arg0, s32 arg1) {
    s32 temp_r1;
    s32 temp_r2;

    temp_r2 = M2C_FIELD(arg0, s32 *, 0xF0);
    if (temp_r2 <= 0) {
        return;
    }
    temp_r1                      = temp_r2 - arg1;
    M2C_FIELD(arg0, s32 *, 0xF0) = temp_r1;
    if (temp_r1 <= 0) {
        M2C_FIELD(arg0, u8 *, 0xEC) = (u8) (M2C_FIELD(arg0, u8 *, 0xEC) & ~2);
    }
}
