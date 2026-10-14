#include "m2c.h"

s32 func_0207d4a4(M2C_UNK);                         /* extern */
M2C_UNK func_020b574c();                            /* extern */
s32 func_020b586c();                                /* extern */
extern s32 data_021670a8;

void func_020b56d8(void) {
    s32 var_r0;

    if (data_021670a8 == 0) {
        var_r0 = func_0207d4a4(0x70);
        if (var_r0 != 0) {
            var_r0 = func_020b586c();
        }
        data_021670a8 = var_r0;
    }
    func_020b574c();
}
