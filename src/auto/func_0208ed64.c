#include "m2c.h"

s32 func_0208c3f8(s16);                             /* extern */
M2C_UNK func_0208e5f4(s32, M2C_UNK);                /* extern */

s32 func_0208ed64(void *arg0) {
    M2C_UNK var_r1;
    s32 temp_r0;

    temp_r0 = func_0208c3f8((s16) M2C_FIELD(arg0, s32 *, 0));
    if (temp_r0 != 0) {
        if (M2C_FIELD(arg0, s32 *, 4) != 0) {
            var_r1 = 1;
        } else {
            var_r1 = 0;
        }
        func_0208e5f4(temp_r0, var_r1);
    }
    return 0;
}
