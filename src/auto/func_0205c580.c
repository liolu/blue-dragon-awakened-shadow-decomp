#include "m2c.h"

s32 func_0201a164();                                /* extern */
M2C_UNK func_0201a180(s32, s32);                    /* extern */
s32 func_0205cb20(s32);                             /* extern */

s32 func_0205c580(s32 arg0) {
    s32 temp_r0;

    if (arg0 == 0) {
        return 0;
    }
    temp_r0 = func_0205cb20(func_0201a164() + 1);
    if (temp_r0 != 0) {
        func_0201a180(temp_r0, arg0);
    }
    return temp_r0;
}
