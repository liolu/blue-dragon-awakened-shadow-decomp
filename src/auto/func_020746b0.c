#include "m2c.h"

s32 func_020734b8(M2C_UNK *);                       /* extern */
M2C_UNK func_020743b0(M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
s32 func_020745ec(M2C_UNK *);                       /* extern */
M2C_UNK *func_0207464c(s32, M2C_UNK);               /* extern */
extern M2C_UNK data_020fd100;

void func_020746b0(M2C_UNK arg0, s32 arg1) {
    M2C_UNK *var_r8;
    M2C_UNK *var_r9;

    var_r8 = func_0207464c(arg1 + 1, 0x5C);
    if (var_r8 == NULL) {
        return;
    }
    do {
        var_r9 = func_0207464c(0, 0x5C);
        if (var_r9 == NULL) {
            var_r9 = &data_020fd100;
        }
        if ((func_020745ec(var_r8) != 0) && (func_020734b8(var_r8) == 0)) {
            func_020743b0(arg0, var_r8, var_r9);
        }
        var_r8 = func_0207464c(0, 0x5C);
    } while (var_r8 != NULL);
}
