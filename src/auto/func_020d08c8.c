#include "m2c.h"

s32 func_0207d4a4(M2C_UNK);                         /* extern */
s32 func_020d0870();                                /* extern */
extern s32 data_0216716c;

void func_020d08c8(void) {
    s32 var_r0;

    if (data_0216716c != 0) {
        return;
    }
    var_r0 = func_0207d4a4(0xFC0);
    if (var_r0 != 0) {
        var_r0 = func_020d0870();
    }
    data_0216716c = var_r0;
}
