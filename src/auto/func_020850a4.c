#include "m2c.h"

s32 func_0208a680(s32);                             /* extern */
M2C_UNK func_020bfbb8(s32, M2C_UNK);                /* extern */

s32 func_020850a4(void *arg0) {
    M2C_UNK var_r1;
    s32 temp_r0;

    temp_r0 = func_0208a680(M2C_FIELD(arg0, s32 *, 0));
    if (temp_r0 == 0) {
        return 0;
    }
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    func_020bfbb8(temp_r0, var_r1);
    return 0;
}
