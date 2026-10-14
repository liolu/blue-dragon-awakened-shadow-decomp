#include "m2c.h"

void *func_02059234();                              /* extern */

void func_02058bec(s32 arg0, s16 arg1) {
    M2C_FIELD(func_02059234(), s32 *, 0x1C) = arg0;
    M2C_FIELD(func_02059234(), s16 *, 0x1A) = arg1;
}
