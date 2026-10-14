#include "m2c.h"

s32 func_020a3c34(s32 arg0) {
    s32 var_r1;
    s32 var_r2;

    if (arg0 == 0) {
        return 0;
    }
    var_r1 = (s32) (arg0 + ((u32) (arg0 >> 9) >> 0x16)) >> 0xA;
    var_r2 = arg0 - (var_r1 << 0xA);
    if (var_r2 <= 0) {
        var_r2 = 0 - var_r2;
    }
    if (var_r2 > 0x200) {
        if (arg0 > 0) {
            var_r1 += 1;
        } else {
            var_r1 -= 1;
        }
    }
    return var_r1;
}
