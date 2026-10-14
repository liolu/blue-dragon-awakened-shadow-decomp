#include "m2c.h"

s32 *func_020b60e8();                               /* extern */

s32 func_020b87a4(void *arg0) {
    s32 *temp_r0;

    temp_r0 = func_020b60e8();
    if (temp_r0 == NULL) {
        return 0;
    }
    *temp_r0 += M2C_FIELD(arg0, s16 *, 0x14);
    return 1;
}
