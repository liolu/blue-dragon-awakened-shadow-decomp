#include "m2c.h"

s16 func_020bcd18(s32 arg0, s32 arg1) {
    return M2C_FIELD((arg0 + (arg1 * 2)), s16 *, 0x1E);
}
