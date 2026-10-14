#include "m2c.h"

M2C_UNK func_0208a7b0(s32, M2C_UNK);                /* extern */

s32 func_02083d5c(void *arg0) {
    M2C_UNK var_r1;

    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    func_0208a7b0(M2C_FIELD(arg0, s32 *, 0), var_r1);
    return 0;
}
