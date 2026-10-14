#include "m2c.h"

s32 func_0207d4a4(M2C_UNK);                         /* extern */
s32 func_020bd3b8();                                /* extern */
extern s32 data_02167110;

void func_020bd438(void) {
    s32 var_r0;

    if (data_02167110 != 0) {
        return;
    }
    var_r0 = func_0207d4a4(0xC0);
    if (var_r0 != 0) {
        var_r0 = func_020bd3b8();
    }
    data_02167110 = var_r0;
}
