#include "m2c.h"

s32 func_020c3330();                                /* extern */

s32 func_020bf334(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x10) == 0) {
        return 1;
    }
    return func_020c3330();
}
