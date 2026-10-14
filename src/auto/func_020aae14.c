#include "m2c.h"

void func_020aae14(void *arg0, s32 arg1) {
    if (arg1 <= 0) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x6C) != arg1) {
        M2C_FIELD(arg0, s8 *, 0x3A) = 1;
        M2C_FIELD(arg0, s32 *, 0x6C) = arg1;
    }
}
