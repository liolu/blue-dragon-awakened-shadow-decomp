#include "m2c.h"

u32 func_0203bd34();                                /* extern */

s32 func_0203c34c(void) {
    u32 temp_r0;

    temp_r0 = func_0203bd34();
    return ((temp_r0 << 0x18) & 0xFF000000) | (((temp_r0 << 8) & 0xFF0000) | ((u8) (temp_r0 >> 0x18) | ((temp_r0 >> 8) & 0xFF00)));
}
