#include "m2c.h"

s32 func_020da5c8(s32 arg0, s32 arg1) {
    u32 temp_r0;

    temp_r0 = arg1 - 1;
    return (s32) (temp_r0 + (temp_r0 >> 0x1F)) >> 1;
}
