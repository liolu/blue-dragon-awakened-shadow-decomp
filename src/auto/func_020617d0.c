#include "m2c.h"

s32 func_0205b8ac(s32);                             /* extern */
M2C_UNK func_0205db1c(s32, u16, s32, s32, s32, s32); /* extern */
u32 func_0205df24(s32, u16);                        /* extern */
s32 func_020615e0(s32 *, void *, s32, s32);         /* extern */

s32 func_020617d0(s32 *arg0, void *arg1, s32 arg2, s32 arg3) {
    s32 temp_r0;
    s32 temp_r4;
    s32 var_r5;
    s32 var_r6;
    u32 temp_r0_2;

    temp_r4 = *arg0;
    var_r6 = arg3;
    var_r5 = 0;
    if (var_r6 == 0) {
        return 0;
    }
    if (((M2C_FIELD(arg1, s32 *, 0x34) - M2C_FIELD(arg1, s32 *, 0x38)) == 0) && (func_0205b8ac(M2C_FIELD(arg1, s32 *, 0x3C)) == 0)) {
        if (var_r6 <= (s32) (func_0205df24(M2C_FIELD(arg1, s32 *, 8), M2C_FIELD(arg1, u16 *, 0xC)) - 0x17)) {
            func_0205db1c(M2C_FIELD(arg1, s32 *, 8), M2C_FIELD(arg1, u16 *, 0xC), temp_r4 + 0x220, arg2, var_r6, 1);
            var_r5 = var_r6;
            var_r6 = 0;
        } else {
            temp_r0_2 = func_0205df24(M2C_FIELD(arg1, s32 *, 8), M2C_FIELD(arg1, u16 *, 0xC));
            if (temp_r0_2 > 0x17U) {
                var_r5 = temp_r0_2 - 0x17;
                func_0205db1c(M2C_FIELD(arg1, s32 *, 8), M2C_FIELD(arg1, u16 *, 0xC), temp_r4 + 0x220, arg2, var_r5, 1);
                var_r6 -= var_r5;
            }
        }
    }
    if (var_r6 != 0) {
        temp_r0 = func_020615e0(arg0, arg1 + 0x2C, arg2 + var_r5, var_r6);
        if (temp_r0 != 0) {
            return temp_r0;
        }
    }
    return 0;
}
