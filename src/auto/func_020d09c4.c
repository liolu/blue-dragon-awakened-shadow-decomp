#include "m2c.h"

s32 func_020d09c4(void *arg0, s32 arg1) {
    s32 var_r3;
    void *var_ip;

    var_ip = arg0;
    var_r3 = 0;
loop_1:
    if (M2C_FIELD(var_ip, s32 *, 0xF38) == arg1) {
        return (var_r3 * 0x18) + (s32) (arg0 + 0xF30);
    }
    var_r3 += 1;
    var_ip += 0x18;
    if (var_r3 >= 6) {
        return 0;
    }
    goto loop_1;
}
