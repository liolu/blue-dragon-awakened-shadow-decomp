#include "m2c.h"

s32 func_0207d4a4(s32);                             /* extern */
s32 func_020a3574();                                /* extern */
extern s32 data_02165948;

void func_020a3918(void) {
    s32 var_r0;

    if (data_02165948 != 0) {
        return;
    }
    var_r0 = func_0207d4a4(0x3F10);
    if (var_r0 != 0) {
        var_r0 = func_020a3574();
    }
    data_02165948 = var_r0;
}
