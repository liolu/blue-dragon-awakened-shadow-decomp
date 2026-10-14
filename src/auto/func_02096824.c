#include "m2c.h"

M2C_UNK func_0209686c();                            /* extern */
s32 func_ov000_021c4fa8(M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_ov000_021c5128(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

s32 func_02096824(void *arg0, M2C_UNK arg1) {
    s32 temp_r0;

    func_0209686c();
    temp_r0 = func_ov000_021c4fa8(arg1, 0, 0);
    M2C_FIELD(arg0, s32 *, 0x34) = temp_r0;
    if (temp_r0 == 0) {
        return 0;
    }
    func_ov000_021c5128(temp_r0, 0, 4, 0x200);
    return 1;
}
