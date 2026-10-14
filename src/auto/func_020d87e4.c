#include "m2c.h"

s32 func_02002a30(s32);                             /* extern */
s32 func_02024d70(s32, s32);                        /* extern */
M2C_UNK func_020d8794(void *, void *, void *, s32); /* extern */

void func_020d87e4(void *arg0, void *arg1, void *arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp_r0;
    s32 temp_r0_3;
    s32 temp_r2;
    s32 temp_r2_2;
    s32 var_r0;
    s32 var_r11;
    s32 var_r1;
    s32 var_r5;
    s32 var_r6;
    u32 temp_r0_2;
    u32 temp_r1;

    temp_r2 = M2C_FIELD(arg2, s32 *, 4) - M2C_FIELD(arg1, s32 *, 4);
    temp_r2_2 = M2C_FIELD(arg2, s32 *, 0) - M2C_FIELD(arg1, s32 *, 0);
    temp_r0 = func_02002a30((temp_r2_2 * temp_r2_2) + (temp_r2 * temp_r2));
    var_r5 = func_02024d70(temp_r0, arg3);
    if (var_r5 <= 0x20) {
        var_r5 = 0x20;
    }
    if (temp_r0 <= 0) {
        func_020d8794(arg0, arg1, arg2, temp_r0);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x44) = 2;
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg2, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg2, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x1C) = arg4;
    M2C_FIELD(arg0, s32 *, 0x20) = arg5;
    if (arg4 == 0) {
        var_r11 = 0;
        var_r6 = 0;
    } else {
        var_r11 = func_02024d70(var_r5, arg4);
        temp_r0_2 = var_r11 * (arg4 * arg4);
        var_r6 = (s32) (temp_r0_2 + (temp_r0_2 >> 0x1F)) >> 1;
    }
    if (arg5 == 0) {
        var_r0 = 0;
        var_r1 = 0;
    } else {
        var_r0 = func_02024d70(var_r5, arg5);
        temp_r1 = var_r0 * (arg5 * arg5);
        var_r1 = (s32) (temp_r1 + (temp_r1 >> 0x1F)) >> 1;
    }
    M2C_FIELD(arg0, s32 *, 0x24) = var_r6;
    M2C_FIELD(arg0, s32 *, 0x28) = var_r1;
    M2C_FIELD(arg0, s32 *, 0x2C) = var_r11;
    M2C_FIELD(arg0, s32 *, 0x30) = var_r0;
    M2C_FIELD(arg0, s32 *, 0x34) = temp_r0;
    temp_r0_3 = arg5 + (arg4 + func_02024d70(temp_r0 - (var_r6 + var_r1), var_r5));
    M2C_FIELD(arg0, s32 *, 0x18) = temp_r0_3;
    M2C_FIELD(arg0, s32 *, 0x3C) = temp_r0_3;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
}
