#include "m2c.h"

void func_02093350(void *arg0, s32 arg1) {
    if ((arg1 == 0) && ((u32) (M2C_FIELD(arg0, s32 *, 0xCC) - 3) > 1U)) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0xCC) = 0;
}
