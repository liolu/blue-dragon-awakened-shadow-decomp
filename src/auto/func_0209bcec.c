#include "m2c.h"

M2C_UNK func_0209a4dc(void *, s32);                 /* extern */
M2C_UNK func_0209a4f0(void *);                      /* extern */
M2C_UNK func_0209bd6c();                            /* extern */
M2C_UNK func_0209bddc(void *);                      /* extern */

void func_0209bcec(void *arg0, s32 arg1, s32 arg2) {
    s32 var_r0;
    s32 var_r4;
    void *var_r5;

    func_0209bd6c();
    func_0209bddc(arg0);
    var_r4 = 0;
    if ((s32) M2C_FIELD(arg0, u8 *, 0x280) > 0) {
        var_r5 = arg0;
        do {
            var_r0 = M2C_FIELD(var_r5, s32 *, 4) - M2C_FIELD(var_r5, s32 *, 0x10);
            if (var_r0 < 0) {
                var_r0 = 0;
            }
            if ((var_r0 < arg1) || (var_r0 > arg2)) {
                func_0209a4dc(arg0, var_r4);
            }
            var_r4 += 1;
            var_r5 += 0x14;
        } while (var_r4 < (s32) M2C_FIELD(arg0, u8 *, 0x280));
    }
    func_0209a4f0(arg0);
}
