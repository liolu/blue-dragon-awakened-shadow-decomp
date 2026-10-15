#include "m2c.h"

M2C_UNK MI_CpuFill8(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_020d060c(s32, s32);                        /* extern */
M2C_UNK func_020d0670(s32, s32, u8);                /* extern */

void func_020d0720(s32 arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r4;
    u8 temp_r5;
    void *temp_r1;

    temp_r1 = arg0 + (arg1 * 8);
    temp_r5 = M2C_FIELD(temp_r1, u8 *, 0xF01);
    var_r4  = M2C_FIELD(temp_r1, u8 *, 0xF02) + 1;
    if (var_r4 < 6) {
        do {
            temp_r0 = func_020d060c(arg0, var_r4);
            if (temp_r0 != 0) {
                func_020d0670(arg0, temp_r0, temp_r5);
            }
            var_r4 += 1;
        } while (var_r4 < 6);
    }
    MI_CpuFill8(arg0 + 0xF00 + (arg1 * 8), 0, 8);
}
