#include "m2c.h"

M2C_UNK func_02009a34(M2C_UNK *, s32, M2C_UNK);     /* extern */
s32 func_02043f08(s32, s32, s32, M2C_UNK, s32);     /* extern */
extern M2C_UNK data_020f8ee8;
extern s8 data_0210ca1c;

void func_02035648(s32 arg0, s32 arg1, M2C_UNK arg2, s32 arg3) {
    s8 var_r1;

    func_02009a34(&data_020f8ee8, arg0 + 6, 6);
    if (func_02043f08(arg0, arg0 + 6, arg1 - 6, arg2, arg3) < 0) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    data_0210ca1c = var_r1;
}
