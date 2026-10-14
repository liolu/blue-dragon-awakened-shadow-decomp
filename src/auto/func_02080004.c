#include "m2c.h"

s32 func_0207d4a4(M2C_UNK);                         /* extern */
s32 func_0207fdd0();                                /* extern */
extern M2C_UNK data_02110544;

void func_02080004(void) {
    s32 var_r0;

    if (M2C_FIELD(&data_02110544, s32 *, 4) != 0) {
        return;
    }
    var_r0 = func_0207d4a4(0x30);
    if (var_r0 != 0) {
        var_r0 = func_0207fdd0();
    }
    M2C_FIELD(&data_02110544, s32 *, 4) = var_r0;
}
