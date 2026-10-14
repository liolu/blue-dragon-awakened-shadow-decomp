#include "m2c.h"

s32 func_02068098(M2C_UNK, void **, M2C_UNK);       /* extern */
s32 func_02068148(M2C_UNK, void *, M2C_UNK, s32, s32); /* extern */

s32 func_020683c4(M2C_UNK arg0, s32 arg1, s32 arg2, M2C_UNK arg3, s32 arg4, s32 arg5) {
    void *sp4;
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = func_02068098(arg0, &sp4, 9);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    M2C_FIELD(sp4, s32 *, 0x14C) = arg1;
    M2C_FIELD(sp4, s32 *, 0x150) = arg2;
    var_r0 = func_02068148(arg0, sp4, arg3, arg4, arg5);
    if (var_r0 == 0) {
        var_r0 = 0;
    }
    return var_r0;
}
