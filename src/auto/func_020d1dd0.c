#include "m2c.h"

s32 func_0207d4a4(s32);                             /* extern */
s32 func_020d1d1c();                                /* extern */
extern M2C_UNK data_021671c4;

void func_020d1dd0(void) {
    s32 var_r0;

    if (M2C_FIELD(&data_021671c4, s32 *, 4) != 0) {
        return;
    }
    var_r0 = func_0207d4a4(0x9CC);
    if (var_r0 != 0) {
        var_r0 = func_020d1d1c();
    }
    M2C_FIELD(&data_021671c4, s32 *, 4) = var_r0;
}
