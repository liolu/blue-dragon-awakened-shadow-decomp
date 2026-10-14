#include "m2c.h"

s32 func_0207d4a4(M2C_UNK);                         /* extern */
s32 func_020b29c0();                                /* extern */
extern s32 data_021670a0;

void func_020b2810(void) {
    s32 var_r0;

    if (data_021670a0 != 0) {
        return;
    }
    var_r0 = func_0207d4a4(0x114);
    if (var_r0 != 0) {
        var_r0 = func_020b29c0();
    }
    data_021670a0 = var_r0;
}
