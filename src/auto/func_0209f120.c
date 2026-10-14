#include "m2c.h"

M2C_UNK func_0209e3c4(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_0209e47c(s32, M2C_UNK, s32);           /* extern */
s32 func_0209efc4();                                /* extern */
s32 func_020a3b10(s32, M2C_UNK);                    /* extern */
extern s32 data_02165948;

void func_0209f120(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r4;
    s32 var_r5;
    s32 var_r7;

    var_r7 = arg0;
    if (func_0209efc4() == 0) {
        return;
    }
    temp_r4 = func_020a3b10(data_02165948, arg1);
    func_0209e3c4(arg2, 5, arg1);
    var_r5 = 0;
    do {
        func_0209e47c(var_r7, arg2, temp_r4);
        var_r5 += 1;
        var_r7 += 0x14;
    } while (var_r5 < 0x10);
    func_0209e3c4(arg2, 5, 0);
}
