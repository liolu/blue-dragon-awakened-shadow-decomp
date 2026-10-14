#include "m2c.h"

s32 func_0207d4a4(M2C_UNK);                         /* extern */
s32 func_02099d04();                                /* extern */
extern M2C_UNK data_02165820;

void func_02099d60(void) {
    s32 var_r0;

    if (M2C_FIELD(&data_02165820, s32 *, 4) != 0) {
        return;
    }
    var_r0 = func_0207d4a4(0x2D0);
    if (var_r0 != 0) {
        var_r0 = func_02099d04();
    }
    M2C_FIELD(&data_02165820, s32 *, 4) = var_r0;
}
