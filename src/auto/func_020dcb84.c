#include "m2c.h"

void *func_020dc84c();                              /* extern */
s32 func_ov000_021bb2e0();                          /* extern */

s32 func_020dcb84(void) {
    void *temp_r0;

    temp_r0 = func_020dc84c();
    if (temp_r0 == NULL) {
        return 0;
    }
    if (M2C_FIELD(temp_r0, s32 *, 4) == 0) {
        return 0;
    }
    return func_ov000_021bb2e0();
}
