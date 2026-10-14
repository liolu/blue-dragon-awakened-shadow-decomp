#include "m2c.h"

s32 func_0200f5fc(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *, s32 *); /* extern */
extern M2C_UNK (*data_020e5e4c)();
extern M2C_UNK func_0200f348;

s32 func_0200f680(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 sp4;
    s32 temp_r0;

    temp_r0 = func_0200f5fc(arg0, arg1, arg2, &func_0200f348, &sp4);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    data_020e5e4c();
    return sp4;
}
