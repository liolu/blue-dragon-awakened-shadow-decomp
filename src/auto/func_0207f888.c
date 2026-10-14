#include "m2c.h"

s32 func_0207d4a4(M2C_UNK);                         /* extern */
s32 func_020a9fc8();                                /* extern */

void func_0207f888(void *arg0) {
    s32 var_r0;

    if (M2C_FIELD(arg0, s32 *, 0x30) != 0) {
        return;
    }
    var_r0 = func_0207d4a4(0x150);
    if (var_r0 != 0) {
        var_r0 = func_020a9fc8();
    }
    M2C_FIELD(arg0, s32 *, 0x30) = var_r0;
}
