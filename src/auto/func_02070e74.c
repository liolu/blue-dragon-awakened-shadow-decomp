#include "m2c.h"

M2C_UNK func_02006900(M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK *, s32); /* extern */
M2C_UNK func_02070e3c(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020fbc80;
extern M2C_UNK data_0210f11c;

void func_02070e74(M2C_UNK *arg0, s32 arg1) {
    u8 sp4[64];
    M2C_UNK *var_r0;

    var_r0 = arg0;
    if (var_r0 == NULL) {
        func_02006900(sp4, 0x40, &data_020fbc80, &data_0210f11c, arg1);
        var_r0 = sp4;
    }
    func_02070e3c(var_r0);
}
