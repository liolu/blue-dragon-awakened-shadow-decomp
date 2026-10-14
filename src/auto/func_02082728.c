#include "m2c.h"

s32 func_02080fd8(s32);                             /* extern */

s32 func_02082728(s32 arg0, s32 arg1) {
    if ((arg1 > 0) && (func_02080fd8(arg0 + 0x2C) != 0)) {
        return 2;
    }
    return 0;
}
