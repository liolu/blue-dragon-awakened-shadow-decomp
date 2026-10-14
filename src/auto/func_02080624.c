#include "m2c.h"

void func_02080624(s32 arg0, s32 arg1, s8 arg2) {
    M2C_FIELD(((arg1 * 0xC) + arg0), s8 *, 0x14) = arg2;
}
