#include "m2c.h"

s32 func_0200a898();                                /* extern */
s32 func_0200a8d4();                                /* extern */

s32 func_0200a910(void) {
    s32 temp_r4;

    temp_r4 = func_0200a898();
    return (0x100 - temp_r4) - func_0200a8d4();
}
