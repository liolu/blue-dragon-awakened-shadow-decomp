#include "m2c.h"

s32 DWCi_IsError();                                /* extern */
s32 func_0204e314(M2C_UNK);                         /* extern */
s32 func_0204e598(M2C_UNK);                         /* extern */
s32 func_020592d8();                                /* extern */
s32 func_0205990c(s32);                             /* extern */
s32 func_02059c8c(M2C_UNK);                         /* extern */
s32 func_0205a0a8(M2C_UNK);                         /* extern */

s32 func_020594d4(M2C_UNK arg0, s32 arg1) {
    s32 temp_r4;

    if ((DWCi_IsError() != 0) || ((arg1 == 1) && (func_0204e314(arg0) == 0)) || (func_0204e598(arg0) == 0)) {
        return 0;
    }
    if (func_02059c8c(arg0) == 1) {
        return 0;
    }
    temp_r4 = func_0205a0a8(arg0);
    if (temp_r4 < func_0205990c(arg1)) {
        return 0;
    }
    if (func_020592d8() != 0) {
        return 1;
    }
    return 0;
}
