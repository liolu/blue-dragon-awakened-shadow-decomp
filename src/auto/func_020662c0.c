#include "m2c.h"

s32 func_02062f2c();                                /* extern */
s32 func_02063d7c();                                /* extern */
s32 func_020678b8();                                /* extern */
s32 func_02067b04();                                /* extern */
s32 func_0206a7a4();                                /* extern */
s32 func_0206a8a8();                                /* extern */

s32 func_020662c0(s32 arg0, void *arg1, s32 arg2) {
    s32 var_ip;
    u32 temp_r3;

    temp_r3 = M2C_FIELD(arg1, u32 *, 0);
    var_ip = 0;
    switch (temp_r3) {
    default:
        break;
    case 0:
        var_ip = func_02062f2c(arg0, arg1, arg2);
        break;
    case 1:
        var_ip = func_020678b8(arg0, arg1, arg2);
        break;
    case 5:
        var_ip = func_02067b04(arg0, arg1, arg2);
        break;
    case 2:
        var_ip = func_02063d7c(arg0, arg1, arg2);
        break;
    case 4:
        var_ip = func_0206a7a4(arg0, arg1, arg2);
        break;
    case 6:
        var_ip = func_0206a8a8(arg0, arg1, arg2);
        break;
    }
    if (var_ip != 0) {
        M2C_FIELD(arg1, s32 *, 0x1C) = var_ip;
    }
    return var_ip;
}
