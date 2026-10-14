#include "m2c.h"

void *func_0208c3f8(s16);                           /* extern */

s32 func_0208f484(s32 *arg0) {
    void *temp_r0;

    temp_r0 = func_0208c3f8((s16) *arg0);
    if (temp_r0 != NULL) {
        return M2C_FIELD(temp_r0, s32 *, 0x194);
    }
    return 0;
}
