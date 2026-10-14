#include "m2c.h"

s32 func_0208a680(s32);                             /* extern */
M2C_UNK func_020bf684(s32, M2C_UNK);                /* extern */

s32 func_02086cec(s32 *arg0) {
    s32 temp_r0;

    temp_r0 = func_0208a680(*arg0);
    if (temp_r0 != 0) {
        func_020bf684(temp_r0, 1);
    }
    return 0;
}
