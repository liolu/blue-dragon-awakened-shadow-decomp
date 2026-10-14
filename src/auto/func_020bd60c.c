#include "m2c.h"

void func_020bd60c(void *arg0, s8 arg1, s32 arg2, s32 arg3, u16 arg4) {
    s32 var_r3;

    var_r3 = arg3;
    M2C_FIELD(arg0, s8 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = arg2;
    M2C_FIELD(arg0, s32 *, 0xC) = var_r3;
    if (arg1 == 0) {
        var_r3 = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x10) = var_r3;
    M2C_FIELD(arg0, u16 *, 0x14) = arg4;
}
