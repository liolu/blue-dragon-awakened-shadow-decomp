#include "m2c.h"

s32 func_ov000_021c2440(s32, M2C_UNK);                    /* extern */

s32 func_ov000_021c017c(void *arg0) {
    s32 var_r4;

    var_r4 = 1;
    if (func_ov000_021c2440(M2C_FIELD(arg0, s32 *, 0x0), 1) != 0) {
        var_r4 = 0;
    }
    return var_r4;
}
