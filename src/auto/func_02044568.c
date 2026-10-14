#include "m2c.h"

u32 func_02044a60();                                /* extern */
s32 func_02045908();                                /* extern */

s32 func_02044568(void) {
    u32 temp_r0;

    temp_r0 = func_02044a60();
    if (temp_r0 <= 1U) {
        return 0;
    }
    if (temp_r0 < 7U) {
        return 1;
    }
    if (temp_r0 == 9) {
        return 4;
    }
    if (temp_r0 < 0xAU) {
        return 2;
    }
    if (temp_r0 == 0xB) {
        return 4;
    }
    if (temp_r0 < 0x10U) {
        return 3;
    }
    if (temp_r0 == 0x10) {
        return 5;
    }
    if (temp_r0 == 0x11) {
        return 4;
    }
    return func_02045908();
}
