#include "m2c.h"

M2C_UNK WCM_SearchAsync(M2C_UNK, M2C_UNK, s32);       /* extern */
extern M2C_UNK data_020e4c34;

void func_02046760(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    s32 var_r2;

    var_r2 = arg2;
    if (var_r2 > 0xC) {
        var_r2 = 0xC;
    }
    WCM_SearchAsync(arg0, arg1, arg3 | *((M2C_UNK *) ((s8 *) &data_020e4c34 + (var_r2 * 4))));
}
