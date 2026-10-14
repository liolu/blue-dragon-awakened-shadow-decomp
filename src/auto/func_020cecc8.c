#include "m2c.h"

void func_020cecc8(void *arg0, s32 *arg1, s32 *arg2) {
    if (arg1 != NULL) {
        *arg1 = (s32) M2C_FIELD(arg0, s16 *, 0x150);
    }
    if (arg2 != NULL) {
        *arg2 = M2C_FIELD(arg0, s32 *, 0x154);
    }
}
