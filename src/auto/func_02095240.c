#include "m2c.h"

s32 func_0207d4a4(M2C_UNK);                         /* extern */
s32 func_02095230();                                /* extern */
extern s32 data_02165738;

void func_02095240(void) {
    s32 var_r0;

    if (data_02165738 != 0) {
        return;
    }
    var_r0 = func_0207d4a4(0x84);
    if (var_r0 != 0) {
        var_r0 = func_02095230();
    }
    data_02165738 = var_r0;
}
