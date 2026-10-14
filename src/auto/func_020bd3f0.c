#include "m2c.h"

M2C_UNK func_02026e14(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_020bd350(s32);                         /* extern */
extern M2C_UNK func_020bd3a4;

s32 func_020bd3f0(s32 arg0) {
    s32 var_r4;
    s32 var_r5;

    var_r5 = arg0;
    var_r4 = 0;
    do {
        func_020bd350(var_r5);
        var_r4 += 1;
        var_r5 += 8;
    } while (var_r4 < 0x18);
    func_02026e14(arg0, 0x18, 8, &func_020bd3a4);
    return arg0;
}
