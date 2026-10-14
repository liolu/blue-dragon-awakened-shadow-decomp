#include "m2c.h"
#include "engine.h"

s32 func_0209efc4(s32 arg0) {
    s32 var_r0;
    s32 var_r2;

    var_r0 = arg0;
    var_r2 = 0;
loop_1:
    if (*(M2C_UNK *)var_r0 != 0) {
        return 1;
    }
    var_r2 += 1;
    var_r0 += 0x14;
    if (var_r2 >= 0x10) {
        return 0;
    }
    goto loop_1;
}
