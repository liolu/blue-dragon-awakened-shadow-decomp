#include "m2c.h"

M2C_UNK MI_CpuCopy8(s32, s32, s32);               /* extern */
s32 strchr(s32, M2C_UNK);                    /* extern */

s32 func_02054470(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;
    s32 temp_r5;
    s32 temp_r6;
    s32 var_r0;
    s32 var_r7;
    s32 var_r9;

    var_r9  = arg1;
    temp_r6 = strchr(var_r9, 0);
    var_r7  = 0;
    if (arg2 > 0) {
    loop_2:
        temp_r0 = strchr(var_r9, 0x2F);
        if (temp_r0 == 0) {
            return -1;
        }
        var_r7 += 1;
        var_r9 = temp_r0 + 1;
        if (var_r7 >= arg2) {
            goto block_5;
        }
        goto loop_2;
    }
block_5:
    var_r0 = strchr(var_r9, 0x2F);
    if (var_r0 == 0) {
        var_r0 = temp_r6;
    }
    if (var_r9 == var_r0) {
        return -1;
    }
    temp_r5 = var_r0 - var_r9;
    MI_CpuCopy8(var_r9, arg0, temp_r5);
    *(s8 *) (arg0 + temp_r5) = 0;
    return temp_r5;
}