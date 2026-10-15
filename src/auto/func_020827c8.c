#include "m2c.h"

s32 func_0207d4a4(s32);                             /* extern */
s32 func_020816d0();                                /* extern */
s32 func_020821e4();                                /* extern */
extern M2C_UNK data_02164e00;

void func_020827c8(void) {
    s32 var_r0;
    s32 var_r0_2;

    var_r0 = func_0207d4a4(0xCDC);
    if (var_r0 != 0) {
        var_r0 = func_020821e4();
    }
    M2C_FIELD(&data_02164e00, s32 *, 4) = var_r0;
    var_r0_2                            = func_0207d4a4(0x428);
    if (var_r0_2 != 0) {
        var_r0_2 = func_020816d0();
    }
    M2C_FIELD(&data_02164e00, s32 *, 0) = var_r0_2;
}
