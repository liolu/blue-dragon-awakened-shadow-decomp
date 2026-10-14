#include "m2c.h"

s32 func_02048510(s32);                             /* extern */

s32 func_020485ac(void *arg0) {
    if ((func_02048510(arg0 + 0x10) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x1C) > 0)) {
        return 1;
    }
    return 0;
}
