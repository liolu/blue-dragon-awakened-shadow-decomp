#include "m2c.h"

s32 func_020bec48();                                /* extern */

s32 func_020bec8c(void) {
    if (func_020bec48() == 0x16) {
        return 1;
    }
    return 0;
}
