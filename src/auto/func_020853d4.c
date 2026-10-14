#include "m2c.h"

s32 func_0208a680(s32);                             /* extern */
M2C_UNK func_020bf23c(s32, s32);                    /* extern */

s32 func_020853d4(void *arg0) {
    s32 temp_r4;

    temp_r4 = func_0208a680(M2C_FIELD(arg0, s32 *, 0));
    func_020bf23c(temp_r4, func_0208a680(M2C_FIELD(arg0, s32 *, 4)));
    return 1;
}
