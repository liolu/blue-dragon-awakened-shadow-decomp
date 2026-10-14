#include "m2c.h"

M2C_UNK func_0209e41c(void *);                      /* extern */

void func_020a342c(void *arg0) {
    s32 var_r6;
    s8 temp_r0;
    void *var_r7;

    var_r6 = 0;
    var_r7 = arg0;
    do {
        temp_r0 = M2C_FIELD(var_r7, s8 *, 0x18);
        if ((s32) temp_r0 > 0) {
            M2C_FIELD(var_r7, s8 *, 0x18) = (s8) (temp_r0 - 1);
            if ((s32) M2C_FIELD(var_r7, s8 *, 0x18) <= 0) {
                M2C_FIELD(var_r7, s16 *, 0) = -1;
                func_0209e41c(var_r7 + 4);
                M2C_FIELD(var_r7, s8 *, 0x18) = 0;
            }
        }
        var_r6 += 1;
        var_r7 += 0x1C;
    } while (var_r6 < 0x40);
}
