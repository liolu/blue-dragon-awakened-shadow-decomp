#include "m2c.h"

void *func_02059234();                              /* extern */

s32 func_02057a0c(s32 arg0) {
    s32 var_r5;
    s32 var_r6;
    u8 temp_r0;

    var_r5 = 0;
    if (arg0 != 0) {
        return M2C_FIELD(func_02059234(), s32 *, 0x2F0) & ~1;
    }
    var_r6 = 1;
    if ((s32) M2C_FIELD(func_02059234(), u8 *, 0xD) >= 1) {
        do {
            temp_r0 = M2C_FIELD((func_02059234() + var_r6), u8 *, 0x2D0);
            var_r6 += 1;
            var_r5 |= 1 << temp_r0;
        } while (var_r6 <= (s32) M2C_FIELD(func_02059234(), u8 *, 0xD));
    }
    return var_r5;
}
