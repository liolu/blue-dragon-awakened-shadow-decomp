#include "m2c.h"

M2C_UNK func_02009a34(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0203dc34(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK data_020f8fb0;
extern M2C_UNK data_020f8fb4;
extern M2C_UNK data_020f8fb8;

void func_0203dcd0(M2C_UNK arg0) {
    u8 sp20[16];
    u8 sp10[16];
    u8 sp0[16];

    func_0203dc34(sp0, &data_020f8fb0, arg0);
    func_0203dc34(sp10, &data_020f8fb4, arg0);
    func_0203dc34(sp20, &data_020f8fb8, arg0);
    func_02009a34(sp0, arg0, 0x30);
}
