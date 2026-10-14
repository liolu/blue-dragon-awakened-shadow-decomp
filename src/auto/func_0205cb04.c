#include "m2c.h"

extern M2C_UNK data_0210f0a0;

void func_0205cb04(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(&data_0210f0a0, s32 *, 8) = arg0;
    M2C_FIELD(&data_0210f0a0, s32 *, 0xC) = arg1;
    M2C_FIELD(&data_0210f0a0, s32 *, 0x10) = arg2;
    M2C_FIELD(&data_0210f0a0, s32 *, 0x14) = arg3;
}
