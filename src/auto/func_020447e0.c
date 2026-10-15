#include "m2c.h"

void *func_020449a8(M2C_UNK);                       /* extern */

s32 func_020447e0(s32 arg0, M2C_UNK arg1) {
    u8 temp_r1;
    void *temp_r0;

    temp_r0 = func_020449a8(1);
    temp_r1 = M2C_FIELD(temp_r0, u8 *, 8);
    if (temp_r1 & arg0) {
        return 0;
    }
    M2C_FIELD(temp_r0, u8 *, 8) = (u8) (temp_r1 | arg0);
    return M2C_FIELD(temp_r0, s32(**)(s32, M2C_UNK), 0)(arg0, arg1);
}
