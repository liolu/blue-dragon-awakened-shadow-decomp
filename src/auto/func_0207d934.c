#include "m2c.h"

M2C_UNK func_02002fa8();                            /* extern */
M2C_UNK func_0200302c();                            /* extern */
M2C_UNK func_020031ac();                            /* extern */
M2C_UNK func_0200627c(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_0200644c(M2C_UNK);                     /* extern */
M2C_UNK func_02006bec();                            /* extern */
M2C_UNK func_02007adc();                            /* extern */
M2C_UNK func_02008468();                            /* extern */
M2C_UNK func_02008694();                            /* extern */
M2C_UNK func_02008acc(M2C_UNK, u16);                /* extern */
M2C_UNK func_0200a2f0();                            /* extern */
M2C_UNK func_0200cb18(M2C_UNK);                     /* extern */
M2C_UNK func_02010134();                            /* extern */
extern M2C_UNK data_02110430;
extern M2C_UNK func_0207dab8;

void func_0207d934(void) {
    u16 temp_r1;

    M2C_FIELD(&data_02110430, s8 *, 1) = 0;
    func_02007adc();
    func_02006bec();
    func_02008468();
    func_02008694();
    func_02010134();
    func_0200cb18(1);
    func_02002fa8();
    func_0200302c();
    func_020031ac();
    *(s32 *)0x04001000 &= ~0x10000;
    func_0200627c(1, &func_0207dab8);
    func_0200644c(1);
    temp_r1 = *(u16 *)0x04000208;
    *(u16 *)0x04000208 = 1;
    func_02008acc(1, temp_r1);
    func_0200a2f0();
}
