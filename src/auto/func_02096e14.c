#include "m2c.h"

M2C_UNK func_02081090(s32, s32);                    /* extern */
M2C_UNK func_020810f0(s32, s32);                    /* extern */
s32 func_02082408(s32, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK func_020826a0(s32, s32, M2C_UNK);           /* extern */
extern s32 data_02164e04;

s32 func_02096e14(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x80);
    if (temp_r1 != 0) {
        func_020826a0(data_02164e04, temp_r1, 0);
        if (M2C_FIELD(arg0, s32 *, 0x7C) != 0) {
            func_020810f0(data_02164e04 + 0x2C, M2C_FIELD(arg0, s32 *, 0x78));
            func_02081090(data_02164e04 + 0x2C, M2C_FIELD(arg0, s32 *, 0x7C));
            M2C_FIELD(arg0, s32 *, 0x78) = (s32) M2C_FIELD(arg0, s32 *, 0x7C);
        }
    }
    M2C_FIELD(arg0, s32 *, 0x80) = func_02082408(data_02164e04, arg1, arg2);
    M2C_FIELD(arg0, s32 *, 0x7C) = arg3;
    return M2C_FIELD(arg0, s32 *, 0x80);
}
