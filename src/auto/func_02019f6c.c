#include "m2c.h"

extern u32 data_020f8aa4;

s32 func_02019f6c(void) {
    u32 temp_r0;

    temp_r0 = (data_020f8aa4 * 0x41C64E6D) + 0x3039;
    data_020f8aa4 = temp_r0;
    return 0x7FFF & (temp_r0 >> 0x10);
}
