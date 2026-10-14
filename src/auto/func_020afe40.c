#include "m2c.h"

s32 func_020afe40(s32 arg0, s32 arg1) {
    if ((arg1 < 0) || (arg1 >= 0x10)) {
        return 0;
    }
    if (M2C_FIELD((arg0 + (arg1 << 5)), s32 *, 0x210) == 0) {
        return 0;
    }
    return arg0 + 0x210 + (arg1 << 5);
}
