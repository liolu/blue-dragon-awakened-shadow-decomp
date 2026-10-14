#include "m2c.h"

s32 func_020c0f40(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x74) & 0x80) {
        return 1;
    }
    return 0;
}
