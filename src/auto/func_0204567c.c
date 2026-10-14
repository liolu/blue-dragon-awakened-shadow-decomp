#include "m2c.h"

s32 func_0204567c(void *arg0) {
    if (((u32) (M2C_FIELD(arg0, u8 *, 0xD0B) << 0x1C) >> 0x1E) == 1) {
        return 0xC0000;
    }
    return 0x80000;
}
