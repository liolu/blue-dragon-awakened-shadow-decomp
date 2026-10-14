#include "m2c.h"

s32 func_020bce40(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0xD4) & 2) {
        return 1;
    }
    return 0;
}
