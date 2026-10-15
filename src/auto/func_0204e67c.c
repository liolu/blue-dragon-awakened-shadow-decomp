#include "m2c.h"

s32 func_0204e67c(s32 arg0, s32 arg1) {
    s32 var_ip;
    s32 var_lr;
    u8 temp_r2;

    var_ip = 0;
    for (var_lr = 0; var_lr < arg1; var_lr += 1) {
        temp_r2 = *(s8 *) (arg0 + var_lr);
        var_ip |= 1 << temp_r2;
    }
    return var_ip;
}