#include "m2c.h"

s32 func_0207d4a4(M2C_UNK);                         /* extern */
s32 func_020b3b70();                                /* extern */
extern s32 data_021670a4;

void func_020b4760(void) {
    s32 var_r0;

    if (data_021670a4 != 0) {
        return;
    }
    var_r0 = func_0207d4a4(0x4B0);
    if (var_r0 != 0) {
        var_r0 = func_020b3b70();
    }
    data_021670a4 = var_r0;
}
