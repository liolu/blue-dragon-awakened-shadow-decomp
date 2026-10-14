#include "m2c.h"

s32 func_0207d4a4();                         /* extern */
s32 func_020da4f8();                                /* extern */
extern s32 data_021672ac;

void func_020da554(void) {
    s32 var_r0;

    if (data_021672ac != 0) {
        return;
    }
    var_r0 = func_0207d4a4(0x140);
    if (var_r0 != 0) {
        var_r0 = func_020da4f8();
    }
    data_021672ac = var_r0;
}
