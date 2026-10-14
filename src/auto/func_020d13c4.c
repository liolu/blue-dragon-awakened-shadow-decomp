#include "m2c.h"

s32 func_020d13c4(void *arg0, s32 arg1) {
    s32 temp_r2;
    s32 var_r3;
    void *var_ip;

    var_ip = arg0;
    var_r3 = 0;
loop_1:
    temp_r2 = M2C_FIELD(var_ip, s32 *, 0xC);
    if ((temp_r2 != 0) && (arg1 == (temp_r2 + 0x10))) {
        return (var_r3 * 0x14) + (s32) arg0;
    }
    var_r3 += 1;
    var_ip += 0x14;
    if (var_r3 >= 0x10) {
        return 0;
    }
    goto loop_1;
}
