#include "m2c.h"

s32 func_0207d4a4(M2C_UNK);                         /* extern */
s32 func_020d1264();                                /* extern */
extern s32 data_02167170;

void func_020d12c0(void) {
    s32 var_r0;

    if (data_02167170 != 0) {
        return;
    }
    var_r0 = func_0207d4a4(0x140);
    if (var_r0 != 0) {
        var_r0 = func_020d1264();
    }
    data_02167170 = var_r0;
}
