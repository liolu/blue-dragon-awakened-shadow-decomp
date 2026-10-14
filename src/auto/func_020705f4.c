#include "m2c.h"

s32 func_0205b8ac(s32);                             /* extern */
s32 func_0205b8b4(s32, s32);                        /* extern */
M2C_UNK func_0205b9d0(s32, s32);                    /* extern */
extern s32 data_0210f8f0;

void func_020705f4(s32 arg0) {
    s32 var_r5;

    var_r5 = 0;
    if (func_0205b8ac(data_0210f8f0) <= 0) {
        return;
    }
loop_3:
    if (arg0 == func_0205b8b4(data_0210f8f0, var_r5)) {
        func_0205b9d0(data_0210f8f0, var_r5);
        return;
    }
    var_r5 += 1;
    if (var_r5 >= func_0205b8ac(data_0210f8f0)) {
        return;
    }
    goto loop_3;
}
