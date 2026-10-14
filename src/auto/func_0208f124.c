#include "m2c.h"

void *func_0208c3f8(s16);                           /* extern */

s32 func_0208f124(s32 *arg0) {
    s32 var_r0;
    void *temp_r0;

    temp_r0 = func_0208c3f8((s16) *arg0);
    if (temp_r0 != NULL) {
        if ((M2C_FIELD(temp_r0, s32 *, 0x18) != 2) && (M2C_FIELD(temp_r0, s32 *, 0x4A8) != 0)) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    return 0;
}
