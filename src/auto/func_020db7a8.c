#include "m2c.h"
#include "engine.h"

s32 func_020db7a8(s32 arg0, s32 arg1) {
    s32 var_r0;
    s32 var_r3;

    var_r0 = arg0;
    var_r3 = 0;
loop_1:
    if (arg1 == *(M2C_UNK *)var_r0) {
        return var_r3;
    }
    var_r3 += 1;
    var_r0 += 0x28;
    if (var_r3 >= 6) {
        return -1;
    }
    goto loop_1;
}
