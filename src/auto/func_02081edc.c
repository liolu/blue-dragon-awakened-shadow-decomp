#include "m2c.h"

s32 func_02081f00();                                /* extern */

s32 func_02081edc(s32 arg0, s32 arg1) {
    if (arg1 == 0) {
        return 0;
    }
    if (func_02081f00() != 0) {
        return 1;
    }
    return 0;
}
