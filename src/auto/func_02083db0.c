#include "m2c.h"

s32 func_0208a874(s32);                             /* extern */
s32 func_0208aa94(s32);                             /* extern */
M2C_UNK func_0208ae2c(s32, s32);                    /* extern */
M2C_UNK func_0208af64(s32, s32);                    /* extern */

s32 func_02083db0(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 4);
    func_0208ae2c(M2C_FIELD(arg0, s32 *, 0), func_0208a874(temp_r4));
    func_0208af64(M2C_FIELD(arg0, s32 *, 0), func_0208aa94(temp_r4));
    return 0;
}
