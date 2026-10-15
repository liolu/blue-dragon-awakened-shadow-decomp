#include "m2c.h"

void func_020c42f8(void *arg0) {
    void *temp_r2;

    if (M2C_FIELD(arg0, u8 *, 0x2C) != 0) {
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C)  = 1U;
    temp_r2                      = M2C_FIELD(arg0, void **, 0x10);
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(temp_r2, s32 *, 0x318);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(temp_r2, s32 *, 0x31C);
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) M2C_FIELD(temp_r2, s32 *, 0x320);
}
