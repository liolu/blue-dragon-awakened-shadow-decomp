#include "m2c.h"

M2C_UNK func_020c5dc0(s32, s32, M2C_UNK);           /* extern */

s32 func_020d8f0c(void *arg0) {
    M2C_UNK var_r2;
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_r0 == 0) {
        return 0;
    }
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        var_r2 = 1;
    } else {
        var_r2 = 0;
    }
    func_020c5dc0(temp_r0, M2C_FIELD(arg0, s32 *, 4), var_r2);
    return 1;
}
