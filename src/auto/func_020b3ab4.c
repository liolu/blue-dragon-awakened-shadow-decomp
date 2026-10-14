#include "m2c.h"

M2C_UNK func_ov000_021bd4d8(void *, s32, s32, s32); /* extern */

void func_020b3ab4(void *arg0) {
    s32 temp_r1;
    s32 temp_r2;
    s32 temp_r7;
    s32 var_r4;
    void *var_r5;

    if (M2C_FIELD(arg0, u8 *, 0x224) == 0) {
        return;
    }
    var_r4 = 0;
    M2C_FIELD(arg0, u8 *, 0x224) = 0U;
    var_r5 = arg0;
    temp_r7 = M2C_FIELD(arg0, s32 *, 0x1D8) + M2C_FIELD(arg0, u16 *, 0x1FC);
    do {
        temp_r1 = (M2C_FIELD(arg0, s32 *, 0x218) * M2C_FIELD((arg0 + var_r4), u8 *, 0x21C)) + temp_r7;
        M2C_FIELD(var_r5, s32 *, 0x13C) = temp_r1;
        temp_r2 = M2C_FIELD(arg0, s32 *, 0x218);
        func_ov000_021bd4d8(arg0, temp_r1, temp_r2, temp_r2 * var_r4);
        var_r4 += 1;
        var_r5 += 0x14;
    } while (var_r4 < 8);
}
