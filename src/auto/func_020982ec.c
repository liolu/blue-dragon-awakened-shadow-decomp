#include "m2c.h"

M2C_UNK func_ov000_021c0ba4(M2C_UNK *, s32, M2C_UNK); /* extern */
extern M2C_UNK data_ov000_021f4d24;

void func_020982ec(void *arg0, M2C_UNK arg1) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_r1 == -1) {
        return;
    }
    func_ov000_021c0ba4(&data_ov000_021f4d24, temp_r1, arg1);
}
