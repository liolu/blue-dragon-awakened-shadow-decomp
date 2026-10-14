#include "m2c.h"

M2C_UNK func_02024d70(s32, s32);                    /* extern */
s32 func_020b1a0c();                                /* extern */

void func_020b1a50(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r4;

    var_r4 = arg2;
    if (var_r4 < 1) {
        var_r4 = 1;
    }
    func_02024d70(func_020b1a0c(), var_r4);
}
