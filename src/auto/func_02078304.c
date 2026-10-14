#include "m2c.h"

s32 func_0207803c(void *, s32, s32, M2C_UNK);       /* extern */
s32 func_020786bc();                                /* extern */
s32 func_0207d4a4(M2C_UNK);                         /* extern */
s32 func_ov000_021bb160();                          /* extern */
s32 func_ov000_021bb1ec(s32, M2C_UNK);              /* extern */
s32 func_ov000_021bb268(s32);                       /* extern */
s32 func_ov000_021bb2b4(s32, s32);                  /* extern */
s32 func_ov000_021bb2c4(s32, s32, s32);             /* extern */
s32 func_ov000_021bb2f0(s32, s32);                  /* extern */

s32 func_02078304(void *arg0, M2C_UNK arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 var_r4;

    if (func_020786bc() == 0) {
        return 0;
    }
    var_r4 = func_0207d4a4(0xA8);
    if (var_r4 != 0) {
        var_r4 = func_ov000_021bb160();
    }
    if (var_r4 == 0) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = var_r4;
    M2C_FIELD(arg0, s32 *, 0x18) = 3;
    if (func_ov000_021bb1ec(var_r4, arg1) == 0) {
        return 0;
    }
    if ((arg2 > 0) && (func_ov000_021bb2f0(var_r4, arg2) == 0)) {
        return 0;
    }
    if (arg3 != 0) {
        if (func_0207803c(arg0, arg3, arg4, 0) == 0) {
            return 0;
        }
        return func_ov000_021bb2c4(var_r4, M2C_FIELD(arg0, s32 *, 0xC), arg3);
    }
    if (func_0207803c(arg0, func_ov000_021bb268(var_r4), arg4, 0) == 0) {
        return 0;
    }
    return func_ov000_021bb2b4(var_r4, M2C_FIELD(arg0, s32 *, 0xC));
}
