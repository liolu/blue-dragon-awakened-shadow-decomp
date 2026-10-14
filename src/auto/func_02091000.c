#include "m2c.h"

extern u8 data_02167177;

void func_02091000(void *arg0, s32 arg1, s32 arg2, s8 arg3) {
    if (M2C_FIELD(arg0, u8 *, 0x21A) != 0) {
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x21C) = 0;
    if (data_02167177 != 0) {
        M2C_FIELD(arg0, s8 *, 0x21C) = 1;
    }
    M2C_FIELD(arg0, s32 *, 0x68) = arg1;
    M2C_FIELD(arg0, s32 *, 0x6C) = arg2;
    M2C_FIELD(arg0, u8 *, 0x21A) = 1U;
    M2C_FIELD(arg0, s8 *, 0x21B) = 0;
    M2C_FIELD(arg0, s8 *, 0x219) = arg3;
}
