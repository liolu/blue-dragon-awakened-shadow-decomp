#include "engine.h"
#include "m2c.h"

s32 func_020bcd6c(s32 arg0, s32 arg1) {
    s32 var_r0;

    var_r0 = 1;
    if (!(M2C_FIELD(arg0, u8 *, 0x80) & (1 << (u8) arg1))) {
        var_r0 = 0;
    }
    return var_r0;
}
