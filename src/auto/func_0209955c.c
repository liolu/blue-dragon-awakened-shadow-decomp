#include "m2c.h"

s32 func_0207d4a4(M2C_UNK);                         /* extern */
s32 func_02099500();                                /* extern */
extern s32 data_02165820;

void func_0209955c(void) {
    s32 var_r0;

    if (data_02165820 != 0) {
        return;
    }
    var_r0 = func_0207d4a4(0x1700);
    if (var_r0 != 0) {
        var_r0 = func_02099500();
    }
    data_02165820 = var_r0;
}
