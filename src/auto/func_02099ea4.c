/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02099ea4(s32 *arg0, s32 arg1) {
    s32 *var_ip;
    s32 temp_r2;
    s32 var_r3;

    var_ip = arg0;
    var_r3 = 0;
loop_1:
    temp_r2 = *var_ip;
    if ((temp_r2 != 0) && (arg1 == (temp_r2 + 0x10))) {
        return (var_r3 * 0x78) + (s32) arg0;
    }
    var_r3 += 1;
    var_ip = (s32 *) ((s8 *) var_ip + 0x78);
    if (var_r3 >= 6) {
        return 0;
    }
    goto loop_1;
}
