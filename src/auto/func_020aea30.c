#include "m2c.h"

s32 func_020bf2cc(s32);                             /* extern */
s32 func_020bf738();                                /* extern */

s32 func_020aea30(void *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 4) == 0) || (func_020bf738() == 0) || (func_020bf2cc(M2C_FIELD(arg0, s32 *, 4)) != 0)) {
        return 0;
    }
    return 1;
}
