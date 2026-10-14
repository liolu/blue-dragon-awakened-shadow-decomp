#include "m2c.h"

s32 func_ov000_021aff24(s32);                       /* extern */
M2C_UNK func_ov000_021c0e34(M2C_UNK *, s32, M2C_UNK); /* extern */
extern M2C_UNK data_ov000_021f4d24;

void func_020b5b8c(s32 arg0, M2C_UNK arg1, s32 *arg2) {
    s32 temp_r1;

    if (func_ov000_021aff24(arg0 + 0x28) != 0) {
        temp_r1 = *arg2;
        if (temp_r1 != -1) {
            func_ov000_021c0e34(&data_ov000_021f4d24, temp_r1, arg1);
        }
    }
}
