#include "m2c.h"

s32 func_0209d680(s32);                             /* extern */
M2C_UNK func_020d1210();                            /* extern */

void func_020d1194(void *arg0, s32 arg1, s32 arg2) {
    s32 var_r2;

    func_020d1210();
    if (arg1 >= func_0209d680(M2C_FIELD(arg0, s32 *, 0xC) + 0x310)) {
        return;
    }
    if (arg2 != 0) {
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | (1 << arg1));
        var_r2 = 1 << arg1;
    } else {
        var_r2 = 1 << arg1;
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) & ~(1 << arg1));
    }
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) | var_r2);
}
