#include "m2c.h"

M2C_UNK func_0200f5fc(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_020100a8();                            /* extern */
extern M2C_UNK *data_020e5e4c;
extern M2C_UNK func_0200f2ec;

void func_0200f818(M2C_UNK arg0, s32 arg1) {
    M2C_UNK *temp_r4;

    temp_r4 = data_020e5e4c;
    data_020e5e4c = &func_0200f2ec;
    func_020100a8();
    data_020e5e4c = temp_r4;
    func_0200f5fc(0xE, 0, 0, arg0, arg1);
}
