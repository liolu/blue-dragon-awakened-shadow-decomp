#include "m2c.h"

s32 func_0205b80c(M2C_UNK, M2C_UNK, M2C_UNK *);     /* extern */
void *func_0205cf2c();                              /* extern */
s32 func_0206d0f0(void *, M2C_UNK *, s32, s32, M2C_UNK *); /* extern */
M2C_UNK func_0206d15c(s32, M2C_UNK *);              /* extern */
s32 func_0206d49c(s32);                             /* extern */
s16 func_0206d4a4(s32);                             /* extern */
M2C_UNK func_0206d4cc(s32, M2C_UNK *);              /* extern */
M2C_UNK func_0206fc70(M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_0205cf38;
extern M2C_UNK func_0205cfb4;
extern M2C_UNK func_0205d540;
extern M2C_UNK func_0205d5a0;

s32 func_0205d6f0(M2C_UNK arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 argA) {
    u8 sp4[24];
    s32 temp_r0;
    s32 temp_r0_2;
    s32 var_r5;
    s32 var_r6;
    void *temp_r4;

    var_r6 = arg1;
    var_r5 = arg2;
    temp_r4 = func_0205cf2c();
    if (var_r6 == 0) {
        var_r6 = 0x5DC;
    }
    M2C_FIELD(temp_r4, s32 *, 0x24) = arg3;
    M2C_FIELD(temp_r4, s32 *, 0x28) = arg8;
    M2C_FIELD(temp_r4, s32 *, 0x10) = arg4;
    M2C_FIELD(temp_r4, s32 *, 0x14) = arg5;
    M2C_FIELD(temp_r4, s32 *, 0x18) = arg6;
    M2C_FIELD(temp_r4, s32 *, 0x1C) = arg7;
    if (var_r5 == 0) {
        var_r5 = 0x5B4;
    }
    M2C_FIELD(temp_r4, s32 *, 0x20) = arg9;
    func_0206fc70(0, arg0, sp4);
    if (func_0206d0f0(temp_r4, sp4, var_r5, var_r6, &func_0205cfb4) != 0) {
        return 3;
    }
    temp_r0 = func_0205b80c(0xC, 1, NULL);
    M2C_FIELD(temp_r4, s32 *, 4) = temp_r0;
    if (temp_r0 == 0) {
        return 1;
    }
    temp_r0_2 = func_0205b80c(0x3C, 1, &func_0205cf38);
    M2C_FIELD(temp_r4, s32 *, 8) = temp_r0_2;
    if (temp_r0_2 == 0) {
        return 1;
    }
    func_0206d4cc(M2C_FIELD(temp_r4, s32 *, 0), &func_0205d540);
    func_0206d15c(M2C_FIELD(temp_r4, s32 *, 0), &func_0205d5a0);
    M2C_FIELD(temp_r4, s32 *, 0x34) = func_0206d49c(M2C_FIELD(temp_r4, s32 *, 0));
    M2C_FIELD(temp_r4, s16 *, 0x38) = func_0206d4a4(M2C_FIELD(temp_r4, s32 *, 0));
    M2C_FIELD(temp_r4, s32 *, 0x30) = 0;
    M2C_FIELD(temp_r4, s32 *, 0xC) = 1;
    if (argA != 0) {
        M2C_FIELD(temp_r4, s32 *, 0x2C) = argA;
    } else {
        M2C_FIELD(temp_r4, s32 *, 0x2C) = 0;
    }
    return 0;
}
