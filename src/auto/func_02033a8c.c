#include "m2c.h"

extern void *data_0210bd70;

void func_02033a8c(s32 arg0, s32 arg1) {
    M2C_FIELD((M2C_FIELD(data_0210bd70, s32 *, 0x84) + (arg0 * 0x10)), s32 *, 0x14) = arg1;
}
