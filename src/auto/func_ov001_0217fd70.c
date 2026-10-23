#include "m2c.h"

M2C_UNK MIi_CpuCopy16(s32, s32, s32);               /* extern */
extern s32 data_ov001_02196c34;

void func_ov001_0217fd70(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_r6;
    s32 var_r5;
    s32 var_r8;

    var_r8 = arg0;
    var_r6 = data_ov001_02196c34 + 4 + (arg1 * 2);
    var_r5 = 0;
    if (arg3 <= 0) {
        return;
    }
    do {
        MIi_CpuCopy16(var_r8, var_r6, arg2 * 2);
        var_r5 += 1;
        var_r8 += 0x40;
        var_r6 += 0x40;
    } while (var_r5 < arg3);
}
