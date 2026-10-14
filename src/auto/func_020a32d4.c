#include "m2c.h"

M2C_UNK func_0209e41c(s32);                         /* extern */

void func_020a32d4(void *arg0) {
    s32 var_r6;
    void *var_r7;

    var_r6 = 0;
    var_r7 = arg0;
    do {
        M2C_FIELD(var_r7, s16 *, 0) = -1;
        func_0209e41c(var_r7 + 4);
        var_r6 += 1;
        M2C_FIELD(var_r7, s8 *, 0x18) = 0;
        var_r7 += 0x1C;
    } while (var_r6 < 0x40);
}
