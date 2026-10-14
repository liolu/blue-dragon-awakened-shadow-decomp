#include "m2c.h"
#include "engine.h"

s32 func_02044b5c(s32 arg0) {
    s32 var_r0;

    var_r0 = arg0;
    if ((u32) var_r0 > 2U) {
        var_r0 = (s32) (u8) (var_r0 - 3);
    }
    return var_r0;
}
