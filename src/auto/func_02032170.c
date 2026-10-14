#include "m2c.h"

s32 func_020273f0(M2C_UNK *, s32);                  /* extern */
M2C_UNK func_020326e4(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_0210add8;

void func_02032170(M2C_UNK arg0) {
    s32 temp_r4;
    s32 var_r6;

    var_r6 = func_020273f0(&data_0210add8, 0);
    if (var_r6 == 0) {
        return;
    }
    do {
        temp_r4 = func_020273f0(&data_0210add8, var_r6);
        func_020326e4(var_r6, arg0);
        var_r6 = temp_r4;
    } while (temp_r4 != 0);
}
