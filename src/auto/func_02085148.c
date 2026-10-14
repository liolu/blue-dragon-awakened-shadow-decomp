#include "m2c.h"

void *func_0208a680(u16);                           /* extern */

s32 func_02085148(s32 *arg0) {
    void *temp_r0;

    temp_r0 = func_0208a680((u16) *arg0);
    if (temp_r0 != NULL) {
        return M2C_FIELD(temp_r0, s32 *, 0x78);
    }
    return 0;
}
