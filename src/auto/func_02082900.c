#include "m2c.h"

s32 func_02082900(s8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_ip;
    s32 var_lr;
    s8 *var_r4;

    var_r4 = arg0;
    var_lr = 0;
loop_1:
    if (M2C_FIELD(var_r4, s32 *, 4) == 0) {
        temp_ip = (var_lr * 0xC) + (s32) arg0;
        M2C_FIELD(temp_ip, s32 *, 4) = arg1;
        M2C_FIELD(temp_ip, s32 *, 8) = arg2;
        M2C_FIELD(temp_ip, s32 *, 0xC) = arg3;
        *arg0 = 1;
        return 1;
    }
    var_lr += 1;
    var_r4 += 0xC;
    if (var_lr >= 0x10) {
        return 0;
    }
    goto loop_1;
}
