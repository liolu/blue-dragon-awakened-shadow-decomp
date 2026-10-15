#include "m2c.h"

M2C_UNK func_020535e4(M2C_UNK);                     /* extern */
void *func_02059234();                              /* extern */
M2C_UNK qr2_register_keyA(M2C_UNK, M2C_UNK *);          /* extern */
extern M2C_UNK data_020fa7d8;
extern M2C_UNK data_020fa7e0;
extern M2C_UNK data_020fa7ec;
extern M2C_UNK data_020fa7f8;
extern M2C_UNK data_020fa804;

void func_02053980(s8 arg0, s8 arg1, s32 arg2, s32 arg3) {
    func_020535e4(0);
    M2C_FIELD(func_02059234(), s8 *, 0x15)   = arg0;
    M2C_FIELD(func_02059234(), s8 *, 0x16)   = arg1;
    M2C_FIELD(func_02059234(), s32 *, 0x464) = arg2;
    M2C_FIELD(func_02059234(), s32 *, 0x468) = arg3;
    M2C_FIELD(func_02059234(), s8 *, 0x17D)  = 0;
    M2C_FIELD(func_02059234(), s8 *, 0x2D0)  = 0;
    qr2_register_keyA(0x32, &data_020fa7d8);
    qr2_register_keyA(0x33, &data_020fa7e0);
    qr2_register_keyA(0x34, &data_020fa7ec);
    qr2_register_keyA(0x35, &data_020fa7f8);
    qr2_register_keyA(0x36, &data_020fa804);
}
