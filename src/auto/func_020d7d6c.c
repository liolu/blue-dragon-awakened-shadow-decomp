#include "m2c.h"

void func_020d7d6c(void *arg0) {
    M2C_FIELD((arg0 + (M2C_FIELD(arg0, s32 *, 0x24) * 4)), s32 *, 8) = 3;
    M2C_FIELD(arg0, s32 *, 0x24)                                     = -1;
}
