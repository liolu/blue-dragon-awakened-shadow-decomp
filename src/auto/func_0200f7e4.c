#include "m2c.h"

s32 func_0200f75c(M2C_UNK, M2C_UNK, M2C_UNK *, s32 *); /* extern */
extern M2C_UNK (*data_020e5e4c)();
extern M2C_UNK func_0200f348;

s32 func_0200f7e4(M2C_UNK arg0, M2C_UNK arg1) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_0200f75c(arg0, arg1, &func_0200f348, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    data_020e5e4c();
    return sp0;
}
