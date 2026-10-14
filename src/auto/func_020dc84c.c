#include "m2c.h"

s32 func_020dc84c(s32 arg0, s32 arg1) {
    if ((arg1 < 0) || (arg1 > 0x20)) {
        return 0;
    }
    return (arg1 * 0xC) + arg0;
}
