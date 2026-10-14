#include "m2c.h"

void *func_020dc84c();                              /* extern */

s32 func_020dcbb0(void) {
    void *temp_r0;

    temp_r0 = func_020dc84c();
    if (temp_r0 != NULL) {
        return M2C_FIELD(temp_r0, s32 *, 8);
    }
    return 0;
}
