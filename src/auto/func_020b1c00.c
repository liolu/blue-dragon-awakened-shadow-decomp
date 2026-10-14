#include "m2c.h"

s32 func_020b1c00(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x2C) != 0) {
        return 1;
    }
    return 0;
}
