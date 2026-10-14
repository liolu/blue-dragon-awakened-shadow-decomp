#include "m2c.h"

s32 func_0208c3f8(s16);                             /* extern */
s32 func_ov000_021bac5c(s32);                       /* extern */

s32 func_0208f018(s32 *arg0) {
    s32 temp_r0;

    temp_r0 = func_0208c3f8((s16) *arg0);
    if (temp_r0 == 0) {
        return 0;
    }
    return func_ov000_021bac5c(temp_r0 + 0x28);
}
