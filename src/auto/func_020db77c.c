#include "engine.h"
#include "m2c.h"

s32 func_020db77c(s32 arg0) {
    s32 var_r0;
    s32 var_r2;

    var_r0 = arg0;
    var_r2 = 0;
loop_1:
    if (*(M2C_UNK *) var_r0 == 0) {
        return var_r2;
    }
    var_r2 += 1;
    var_r0 += 0x28;
    if (var_r2 >= 6) {
        return -1;
    }
    goto loop_1;
}
