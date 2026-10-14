#include "m2c.h"

s32 func_020bcca8();                                /* extern */

s32 func_020c6d44(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x18) == 0) {
        return 0;
    }
    return func_020bcca8();
}
