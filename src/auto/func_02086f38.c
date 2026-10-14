#include "m2c.h"

M2C_UNK func_ov000_0218a8b8(s32, M2C_UNK);          /* extern */
extern s32 data_02110548;
extern s32 data_ov000_021ee214;
extern s32 data_ov000_021ee728;
extern s32 data_ov000_021eeac4;

s32 func_02086f38(void *arg0) {
    M2C_UNK var_r1;
    M2C_UNK var_r1_2;
    M2C_UNK var_r1_3;
    M2C_UNK var_r1_4;
    u32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, u32 *, 0);
    switch (temp_r1) {
    default:
        break;
    case 0:
        if (M2C_FIELD(arg0, s32 *, 4) != 0) {
            var_r1 = 1;
        } else {
            var_r1 = 0;
        }
        func_ov000_0218a8b8(data_ov000_021eeac4, var_r1);
        break;
    case 1:
        if (M2C_FIELD(arg0, s32 *, 4) != 0) {
            var_r1_2 = 1;
        } else {
            var_r1_2 = 0;
        }
        func_ov000_0218a8b8(data_ov000_021ee728, var_r1_2);
        break;
    case 2:
        if (M2C_FIELD(arg0, s32 *, 4) != 0) {
            var_r1_3 = 1;
        } else {
            var_r1_3 = 0;
        }
        func_ov000_0218a8b8(data_ov000_021ee214, var_r1_3);
        break;
    case 3:
        if (M2C_FIELD(arg0, s32 *, 4) != 0) {
            var_r1_4 = 1;
        } else {
            var_r1_4 = 0;
        }
        func_ov000_0218a8b8(data_02110548, var_r1_4);
        break;
    }
    return 0;
}
