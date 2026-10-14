#include "m2c.h"

s32 func_020c5620();                                /* extern */

void func_020c9738(void *arg0) {
    if (func_020c5620() != 0) {
        M2C_FIELD(arg0, s32 *, 0x130) = 2;
    }
}
