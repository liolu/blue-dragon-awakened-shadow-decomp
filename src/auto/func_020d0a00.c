#include "m2c.h"

s32 func_020d0a00(void *arg0, s32 arg1) {
    s32 temp_r2;
    s32 var_r3;
    void *var_ip;

    var_ip = arg0;
    var_r3 = 0;
loop_1:
    temp_r2 = M2C_FIELD(var_ip, s32 *, 0xF38);
    if ((temp_r2 != 0) && (arg1 == (temp_r2 + 0x10))) {
        return (var_r3 * 0x18) + (s32) (arg0 + 0xF30);
    }
    var_r3 += 1;
    var_ip += 0x18;
    if (var_r3 >= 6) {
        return 0;
    }
    goto loop_1;
}
