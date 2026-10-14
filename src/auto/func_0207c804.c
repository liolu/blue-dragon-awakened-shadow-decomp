#include "m2c.h"

M2C_UNK func_0207bc64(void *, M2C_UNK);             /* extern */
M2C_UNK func_0207c42c(void *, s32, M2C_UNK);        /* extern */

s32 func_0207c804(void *arg0, s32 arg1) {
    s32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0xF4);
    if ((temp_r3 != 0) && (temp_r3 != 0xA)) {
        if ((M2C_FIELD(arg0, s32 *, 0x110) == arg1) && (temp_r3 == 1)) {
            M2C_FIELD(arg0, s32 *, 0xF4) = 0xA;
            func_0207bc64(arg0, 1);
            return 1;
        }
        goto block_9;
    }
block_9:
    if (M2C_FIELD(arg0, s32 *, 0x44) == arg1) {
        func_0207c42c(arg0, M2C_FIELD(arg0, s32 *, 0x3C), 1);
        return 1;
    }
    if (M2C_FIELD(arg0, s32 *, 0x40) != arg1) {
        return 0;
    }
    func_0207c42c(arg0, M2C_FIELD(arg0, s32 *, 0x38), 1);
    return 1;
}
