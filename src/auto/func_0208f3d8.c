#include "m2c.h"

s32 func_0208c3f8(s16);                             /* extern */
M2C_UNK func_0208e578(s32, s32, s32);               /* extern */

s32 func_0208f3d8(void *arg0) {
    s32 temp_r0;

    temp_r0 = func_0208c3f8((s16) M2C_FIELD(arg0, s32 *, 0));
    if (temp_r0 != 0) {
        func_0208e578(temp_r0, M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8));
    }
    return 0;
}
