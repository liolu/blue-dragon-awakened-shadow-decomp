#include "m2c.h"

M2C_UNK func_ov000_02178550(s32, s32, s32, M2C_UNK); /* extern */
extern s32 data_ov000_021ee10c;

void func_020b5548(void *arg0, s8 arg1) {
    s32 temp_r1;
    s32 var_r6;
    s32 var_r7;
    void *var_r8;

    var_r8 = arg0;
    var_r6 = 0;
    M2C_FIELD(var_r8, s8 *, 0x4AC) = arg1;
    if (arg1 == 0) {
        var_r7 = 1;
    } else {
        var_r7 = 0;
    }
    do {
        temp_r1 = M2C_FIELD(var_r8, s32 *, 0x2C);
        if (temp_r1 != 0) {
            func_ov000_02178550(data_ov000_021ee10c, temp_r1, var_r7, 1);
        }
        var_r6 += 1;
        var_r8 += 0x30;
    } while (var_r6 < 0x18);
}
