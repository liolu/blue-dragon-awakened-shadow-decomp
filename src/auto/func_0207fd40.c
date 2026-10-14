#include "m2c.h"

s32 func_0207d4a4(M2C_UNK);                         /* extern */
s32 func_0207f388();                                /* extern */

void func_0207fd40(void *arg0) {
    s32 var_r0;

    if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        return;
    }
    var_r0 = func_0207d4a4(0x38);
    if (var_r0 != 0) {
        var_r0 = func_0207f388();
    }
    M2C_FIELD(arg0, s32 *, 0xC) = var_r0;
}
