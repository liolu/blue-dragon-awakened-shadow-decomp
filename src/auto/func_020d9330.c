#include "m2c.h"

s32 func_020ac6e8(s32);                             /* extern */

s32 func_020d9330(void **arg0) {
    void *temp_r0;

    temp_r0 = *arg0;
    if (temp_r0 == NULL) {
        return 0;
    }
    return func_020ac6e8(M2C_FIELD(temp_r0, s32 *, 0xC));
}
