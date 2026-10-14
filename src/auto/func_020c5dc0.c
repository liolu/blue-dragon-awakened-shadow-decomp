#include "m2c.h"

M2C_UNK func_020ac010(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_020c0f54(s32, s32, M2C_UNK, M2C_UNK);  /* extern */

void func_020c5dc0(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_r3 == 0) {
        return;
    }
    if (arg1 < 0) {
        return;
    }
    if (arg1 > 2) {
        return;
    }
    if (arg2 != 0) {
        func_020ac010(M2C_FIELD(arg0, s32 *, 0xC), 1, arg1);
        return;
    }
    func_020c0f54(temp_r3, arg1, 1, 1);
}
