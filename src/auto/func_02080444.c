#include "m2c.h"

s32 func_0207d4a4(M2C_UNK);                         /* extern */
s32 func_020803c8();                                /* extern */
extern s32 data_02110554;

void func_02080444(void) {
    s32 var_r0;

    if (data_02110554 != 0) {
        return;
    }
    var_r0 = func_0207d4a4(0x200);
    if (var_r0 != 0) {
        var_r0 = func_020803c8();
    }
    data_02110554 = var_r0;
}
