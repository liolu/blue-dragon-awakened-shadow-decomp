/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

s32 func_02098790(s32 arg0, s32 arg1) {
    s32 var_ip;
    s32 var_r3;

    var_ip = arg0;
    var_r3 = 0;
loop_1:
    if (*(M2C_UNK *)var_ip == arg1) {
        return (var_r3 * 0x34) + arg0;
    }
    var_r3 += 1;
    var_ip += 0x34;
    if (var_r3 >= 0x20) {
        return 0;
    }
    goto loop_1;
}
