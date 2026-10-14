#include "m2c.h"

M2C_UNK func_020d1598(void *);                      /* extern */
M2C_UNK func_020d1684(void *, void *);              /* extern */

void func_020d1750(void *arg0, void *arg1) {
    s32 var_r4;
    void *var_r5;
    void *var_r6;

    var_r6 = arg0;
    M2C_FIELD(var_r6, s32 *, 0x60) = (s32) M2C_FIELD(arg1, s32 *, 0);
    var_r5 = arg1 + 8;
    var_r4 = 0;
    M2C_FIELD(var_r6, u16 *, 0x64) = (u16) M2C_FIELD(arg1, u16 *, 4);
    M2C_FIELD(var_r6, u8 *, 0x66) = (u8) M2C_FIELD(arg1, u8 *, 6);
    do {
        func_020d1598(var_r6);
        func_020d1684(var_r6, var_r5);
        var_r4 += 1;
        var_r6 += 0x20;
        var_r5 += 0x20;
    } while (var_r4 < 3);
}
