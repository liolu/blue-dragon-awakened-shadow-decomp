#include "m2c.h"

M2C_UNK func_020068c0(s8 *, M2C_UNK *, M2C_UNK);    /* extern */
M2C_UNK func_02017b34(M2C_UNK *, M2C_UNK, s32);     /* extern */
s32 func_0201a164(M2C_UNK);                         /* extern */
M2C_UNK func_0201a180(M2C_UNK *, M2C_UNK);          /* extern */
s32 func_0205c0cc(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0205c5f8();                            /* extern */
s32 func_0205cb70(s8 *, s32, M2C_UNK *);            /* extern */
M2C_UNK func_0205cbe4();                            /* extern */
extern M2C_UNK data_020fa934;
extern M2C_UNK data_0210f11c;
extern s8 data_0210f15c;
extern M2C_UNK data_0210f19c;
extern M2C_UNK data_0210f1a0;
extern M2C_UNK data_0210f1ad;

void func_0205cc34(M2C_UNK arg0) {
    u8 sp0[64];
    s32 temp_r0;
    s32 temp_r0_2;
    s8 *var_r0;
    s8 temp_r5;

    func_0201a180(&data_0210f11c, arg0);
    M2C_FIELD(&data_0210f19c, s32 *, 0) = -1;
    func_0205c5f8();
    temp_r5 = data_0210f15c;
    if (temp_r5 == 0) {
        func_020068c0(sp0, &data_020fa934, arg0);
    }
    if (temp_r5 != 0) {
        var_r0 = &data_0210f15c;
    } else {
        var_r0 = sp0;
    }
    if (func_0205cb70(var_r0, 0x6CFC, &data_0210f1a0) == 0) {
        return;
    }
    temp_r0 = func_0205c0cc(2, 2, 0);
    M2C_FIELD(&data_0210f19c, s32 *, 0) = temp_r0;
    if (temp_r0 == -1) {
        return;
    }
    M2C_FIELD(&data_0210f19c, s8 *, 0xC) = 9;
    temp_r0_2 = func_0201a164(arg0);
    func_02017b34(&data_0210f1ad, arg0, temp_r0_2 + 1);
    M2C_FIELD(&data_0210f19c, s32 *, 0x4C) = (s32) (temp_r0_2 + 6);
    func_0205cbe4();
    M2C_FIELD(&data_0210f19c, s32 *, 0x54) = 0;
}
