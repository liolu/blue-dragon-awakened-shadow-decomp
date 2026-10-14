#include "m2c.h"

s32 func_020bcc20(s32 arg0, s32 arg1) {
    s32 var_r1;

    var_r1 = arg1;
    if ((var_r1 < 0) || (var_r1 > 2)) {
        var_r1 = 0;
    }
    return arg0 + 0x8C + (var_r1 * 0x10);
}
