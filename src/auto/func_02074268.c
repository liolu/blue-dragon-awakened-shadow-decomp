#include "m2c.h"

void func_02074268(void *arg0, s8 arg1) {
    s32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0x40);
    if (temp_r3 >= 0x14) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x40) = (s32) (temp_r3 + 1);
    M2C_FIELD((arg0 + temp_r3), s8 *, 0x2C) = arg1;
}
