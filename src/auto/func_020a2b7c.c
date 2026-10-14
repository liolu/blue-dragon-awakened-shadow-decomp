#include "m2c.h"

s32 func_020a2b7c(s32 arg0, s32 arg1) {
    if (arg1 == 0) {
        return 0;
    }
    return arg0 + 0x1900 + ((arg1 - 1) * 0x140);
}
