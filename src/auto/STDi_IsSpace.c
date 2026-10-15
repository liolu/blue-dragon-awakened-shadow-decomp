#include "m2c.h"

s32 STDi_IsSpace(s32 arg0) {
    s32 var_r0;
    u32 temp_r3;

    temp_r3 = arg0 - 9;
    var_r0  = 0;
    if (temp_r3 > 0x17U) {
        return 0;
    }
    if (0x80001F & (1 << temp_r3)) {
        var_r0 = 1;
    }
    return var_r0;
}
