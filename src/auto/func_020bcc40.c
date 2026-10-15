#include "m2c.h"

void func_020bcc40(s32 arg0, s32 arg1, void *arg2) {
    void *temp_r1;

    if (arg1 < 0) {
        return;
    }
    if (arg1 > 2) {
        return;
    }
    temp_r1                         = arg0 + (arg1 * 0x10);
    M2C_FIELD(temp_r1, s32 *, 0x8C) = (s32) M2C_FIELD(arg2, s32 *, 0);
    M2C_FIELD(temp_r1, s32 *, 0x90) = (s32) M2C_FIELD(arg2, s32 *, 4);
    M2C_FIELD(temp_r1, s32 *, 0x94) = (s32) M2C_FIELD(arg2, s32 *, 8);
    M2C_FIELD(temp_r1, s32 *, 0x98) = (s32) M2C_FIELD(arg2, s32 *, 0xC);
}
