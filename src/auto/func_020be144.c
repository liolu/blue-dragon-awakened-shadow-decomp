#include "m2c.h"

M2C_UNK func_020bd60c(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */

void func_020be144(void **arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(*arg0, s32 (**)(), 0x78)(arg0, arg1);
    if (temp_r0 == 0) {
        return;
    }
    func_020bd60c(temp_r0, arg1, arg2, arg3, 0xC4);
}
