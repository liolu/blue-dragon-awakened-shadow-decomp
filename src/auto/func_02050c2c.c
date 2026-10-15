#include "m2c.h"

M2C_UNK func_02050154(u32, s32);                    /* extern */

u32 func_02050c2c(u32 arg0, s32 arg1, s32 arg2) {
    s32 var_r2;
    u32 temp_r4;
    u32 var_r0;

    var_r0  = arg0;
    var_r2  = arg2;
    temp_r4 = var_r0;
    if (temp_r4 == 0) {
        return 0U;
    }
    switch (temp_r4) {
        default:
            break;
        case 1:
            var_r0 = 9;
            var_r2 = -1;
            break;
        case 2:
            var_r0 = 9;
            var_r2 = -2;
            break;
        case 3:
            var_r0 = 6;
            var_r2 = -0xA;
            break;
        case 4:
            var_r0 = 6;
            var_r2 = -0x14;
            break;
    }
    func_02050154(var_r0, var_r2 + 0xFFFEEAA8);
    return temp_r4;
}
