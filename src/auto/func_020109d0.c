#include "m2c.h"

s32 func_0200b27c(M2C_UNK, s32, M2C_UNK);           /* extern */

s32 func_020109d0(s32 arg0) {
    if (func_0200b27c(5, (arg0 << 8) & 0x7F00, 0) >= 0) {
        return 1;
    }
    return 0;
}
