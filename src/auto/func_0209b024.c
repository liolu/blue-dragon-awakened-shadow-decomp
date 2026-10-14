#include "m2c.h"

M2C_UNK func_0209a4dc(void *, s32);                 /* extern */
M2C_UNK func_0209a4f0(void *);                      /* extern */

void func_0209b024(void *arg0) {
    s32 var_r4;
    void *var_r5;

    var_r4 = 0;
    if ((s32) M2C_FIELD(arg0, u8 *, 0x280) > 0) {
        var_r5 = arg0;
        do {
            if (M2C_FIELD(var_r5, s32 *, 0xC) != 0) {
                func_0209a4dc(arg0, var_r4);
            }
            var_r4 += 1;
            var_r5 += 0x14;
        } while (var_r4 < (s32) M2C_FIELD(arg0, u8 *, 0x280));
    }
    func_0209a4f0(arg0);
}
