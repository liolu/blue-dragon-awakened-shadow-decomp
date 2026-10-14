#include "m2c.h"

s32 func_02017be0(void *, M2C_UNK *, M2C_UNK);      /* extern */
s32 func_02074c3c(M2C_UNK, s32, u16);               /* extern */
s32 func_02074d14();                                /* extern */
M2C_UNK func_02075964(M2C_UNK, s32);                /* extern */
s32 func_0207670c(u8);                              /* extern */
s32 func_02076738(void *, s32);                     /* extern */
s32 func_020767bc(M2C_UNK, void *, s32);            /* extern */
M2C_UNK func_02076894(M2C_UNK, u8 *, s32, s32 *, u16 *); /* extern */
s32 func_02076904(M2C_UNK, s32, u8 *, s32, s32);    /* extern */
extern M2C_UNK data_020fd150;

s32 func_02076bdc(M2C_UNK arg0, u8 *arg1, s32 arg2) {
    s32 sp8;
    u16 sp4;
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r7;
    u8 temp_r8;

    if (arg2 < 1) {
        return 0;
    }
    temp_r8 = *arg1;
    temp_r0 = func_0207670c(temp_r8);
    if (arg2 < temp_r0) {
        return 0;
    }
    if ((temp_r8 & 0x40) && (func_020767bc(arg0, arg1 + temp_r0, arg2 - temp_r0) == 0)) {
        return 0;
    }
    if ((temp_r8 & 0x80) && (func_02076738(arg1 + temp_r0, arg2 - temp_r0) == 0)) {
        return 0;
    }
    if (func_02017be0(arg1 + 1, &data_020fd150, 4) == 0) {
        return -1;
    }
    func_02076894(arg0, arg1, arg2, &sp8, &sp4);
    temp_r7 = func_02074c3c(arg0, sp8, sp4);
    if (func_02074d14() != 0) {
        return -2;
    }
    temp_r4 = func_02076904(arg0, temp_r7, arg1, arg2, 1);
    func_02075964(arg0, temp_r7);
    return temp_r4;
}
