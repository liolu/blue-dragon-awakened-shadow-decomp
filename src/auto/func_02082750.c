#include "m2c.h"

s32 func_02080fb4(s32);                             /* extern */

s32 func_02082750(s32 arg0) {
    if (func_02080fb4(arg0 + 0x2C) != 0) {
        return 2;
    }
    return 0;
}
