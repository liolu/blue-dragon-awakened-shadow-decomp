#include "m2c.h"

s32 func_0207c624(void *arg0) {
    s32 var_r1;

    var_r1 = M2C_FIELD(arg0, s32 *, 0x44);
    if (var_r1 == 0) {
        var_r1 = M2C_FIELD(arg0, s32 *, 0x40);
    }
    return var_r1;
}
