#include "m2c.h"

s32 func_02014fc0();                                /* extern */
s32 func_02014fd8();                                /* extern */

s32 func_02014f98(void) {
    if ((func_02014fd8() != 0) && (func_02014fc0() == 0)) {
        return 1;
    }
    return 0;
}
