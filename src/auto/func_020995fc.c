#include "m2c.h"

M2C_UNK func_020990e0(s32, M2C_UNK);                /* extern */
s32 func_020995d0();                                /* extern */

s32 func_020995fc(s32 arg0, M2C_UNK arg1) {
    s32 temp_r0;

    temp_r0 = func_020995d0();
    if (temp_r0 != -1) {
        func_020990e0((temp_r0 * 0xB8) + arg0, arg1);
    }
    return temp_r0;
}
