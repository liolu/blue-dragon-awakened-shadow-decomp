#include "m2c.h"

s32 func_020bec48(M2C_UNK);                         /* extern */
s32 func_020bec54(M2C_UNK);                         /* extern */
s32 func_020bf2cc();                                /* extern */

s32 func_020bf2f4(M2C_UNK arg0) {
    s32 temp_r0;
    s32 temp_r4;

    if (func_020bf2cc() == 0) {
        return 0;
    }
    temp_r4 = func_020bec48(arg0);
    temp_r0 = func_020bec54(arg0);
    if ((temp_r4 != 0xC) && (temp_r0 != 0xC)) {
        return 0;
    }
    return 1;
}
