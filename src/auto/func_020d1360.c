#include "m2c.h"

M2C_UNK func_020d1138(s32, M2C_UNK);                /* extern */
s32 func_020d1334();                                /* extern */

s32 func_020d1360(s32 arg0, M2C_UNK arg1) {
    s32 temp_r0;

    temp_r0 = func_020d1334();
    if (temp_r0 != -1) {
        func_020d1138((temp_r0 * 0x14) + arg0, arg1);
    }
    return temp_r0;
}
