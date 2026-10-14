#include "m2c.h"

M2C_UNK func_020c6ddc(s32, s32);                    /* extern */

s32 func_020d8d98(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_r0 == 0) {
        return 0;
    }
    func_020c6ddc(temp_r0, M2C_FIELD(arg0, s32 *, 4));
    return 1;
}
