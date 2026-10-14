#include "m2c.h"

M2C_UNK func_020bebb4(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */

s32 func_020ac090(s32 *arg0) {
    s32 temp_r0;

    temp_r0 = *arg0;
    if (temp_r0 == 0) {
        return 1;
    }
    func_020bebb4(temp_r0, 0, 0, 0, 1, 0);
    return 1;
}
