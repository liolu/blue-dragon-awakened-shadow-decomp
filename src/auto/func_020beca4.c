#include "m2c.h"

s32 func_020bec48();                                /* extern */

s32 func_020beca4(void) {
    if (func_020bec48() == 0x17) {
        return 1;
    }
    return 0;
}
