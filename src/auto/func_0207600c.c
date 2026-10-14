#include "m2c.h"

M2C_UNK func_02017b34(s32, M2C_UNK *, s32);         /* extern */
s32 func_0201a164(M2C_UNK *);                       /* extern */
extern M2C_UNK data_020fd130;

void func_0207600c(s32 *arg0, M2C_UNK *arg1, s32 *arg2) {
    M2C_UNK *var_r7;
    s32 temp_r5;

    var_r7 = arg1;
    if (var_r7 == NULL) {
        var_r7 = &data_020fd130;
    }
    temp_r5 = func_0201a164(var_r7) + 1;
    func_02017b34(*arg0, var_r7, temp_r5);
    *arg2 += temp_r5;
    *arg0 += temp_r5;
}
