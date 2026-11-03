#include "m2c.h"

void func_ov000_02179c08(void *arg0, void *arg1) {
    s32 sp8;
    s32 sp4;
    s32 sp0;
    s32 temp_r1;
    s32 temp_r2;
    s32 temp_r2_2;

    temp_r2                   = M2C_FIELD(arg1, s32 *, 0);
    sp0                       = temp_r2;
    M2C_FIELD(arg0, s32 *, 0) = temp_r2;
    temp_r2_2                 = M2C_FIELD(arg1, s32 *, 4);
    sp4                       = temp_r2_2;
    M2C_FIELD(arg0, s32 *, 4) = temp_r2_2;
    temp_r1                   = M2C_FIELD(arg1, s32 *, 8);
    sp8                       = temp_r1;
    M2C_FIELD(arg0, s32 *, 8) = temp_r1;
}
