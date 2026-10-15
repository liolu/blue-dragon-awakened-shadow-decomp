#include "m2c.h"

s32 _s32_div_f(s32, s32);                        /* extern */
s32 func_020bcca8();                                /* extern */

s32 func_020c6d60(void *arg0) {
    s32 temp_r4;
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg0, void **, 0x18);
    if (temp_r0 == NULL) {
        return 0;
    }
    temp_r4 = M2C_FIELD(temp_r0, s32 *, 8);
    return _s32_div_f(temp_r4 * 0x64, func_020bcca8());
}
