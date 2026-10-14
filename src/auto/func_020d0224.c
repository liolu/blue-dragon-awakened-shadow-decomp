#include "m2c.h"

s32 func_0207d4a4(s32);                             /* extern */
s32 func_020d016c();                                /* extern */
extern s32 data_02167168;

void func_020d0224(void) {
    s32 var_r0;

    if (data_02167168 != 0) {
        return;
    }
    var_r0 = func_0207d4a4(0x69A);
    if (var_r0 != 0) {
        var_r0 = func_020d016c();
    }
    data_02167168 = var_r0;
}
