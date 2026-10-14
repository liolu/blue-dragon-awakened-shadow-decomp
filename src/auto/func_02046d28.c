#include "m2c.h"

M2C_UNK func_02009a34(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s32 func_02017be0(M2C_UNK *, M2C_UNK *, M2C_UNK);   /* extern */
M2C_UNK func_02046da8(M2C_UNK, M2C_UNK *);          /* extern */
extern M2C_UNK data_020f920c;

void func_02046d28(M2C_UNK arg0, M2C_UNK arg1) {
    u8 sp8[16];
    u8 sp0[8];

    func_02046da8(arg0, sp0);
    if (func_02017be0(sp0, &data_020f920c, 8) != 0) {
        return;
    }
    func_02009a34(sp8, arg1, 0xA);
}
