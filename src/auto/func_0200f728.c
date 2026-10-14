#include "m2c.h"

s32 func_0200f6c4(M2C_UNK, M2C_UNK *, s32 *);       /* extern */
extern M2C_UNK (*data_020e5e4c)();
extern M2C_UNK func_0200f348;

s32 func_0200f728(M2C_UNK arg0) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_0200f6c4(arg0, &func_0200f348, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    data_020e5e4c();
    return sp0;
}
