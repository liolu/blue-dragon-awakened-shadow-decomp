#include "m2c.h"

extern M2C_UNK data_0210f058;

s32 func_020592d8(void) {
    if ((s32) M2C_FIELD(&data_0210f058, s32 *, 4) < 0x6000) {
        return 1;
    }
    return 0;
}
