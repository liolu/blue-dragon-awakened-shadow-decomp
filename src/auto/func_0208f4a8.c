#include "m2c.h"

void *func_0208c3f8(s16);                           /* extern */

s32 func_0208f4a8(void *arg0) {
    void *temp_r0;

    temp_r0 = func_0208c3f8((s16) M2C_FIELD(arg0, s32 *, 0));
    if (temp_r0 != NULL) {
        M2C_FIELD(temp_r0, s8 *, 0x19D) = (s8) M2C_FIELD(arg0, s32 *, 4);
    }
    return 0;
}
