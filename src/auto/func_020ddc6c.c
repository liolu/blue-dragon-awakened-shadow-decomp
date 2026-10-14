#include "m2c.h"

s32 func_0207d4a4(M2C_UNK);                         /* extern */
s32 func_020ddce0();                                /* extern */
extern s32 data_021672d4;

void func_020ddc6c(void) {
    s32 var_r0;

    if (data_021672d4 != 0) {
        return;
    }
    var_r0 = func_0207d4a4(0x1E8);
    if (var_r0 != 0) {
        var_r0 = func_020ddce0();
    }
    data_021672d4 = var_r0;
}
