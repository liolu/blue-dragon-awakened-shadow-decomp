#include "m2c.h"

void func_02098860(s32 arg0, s32 arg1) {
    M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0xC) = 0;
    M2C_FIELD((arg0 + arg1), s8 *, 0x8C) = 0;
}
