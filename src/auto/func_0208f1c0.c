#include "m2c.h"

s32 func_0208c3f8(s16);                             /* extern */
void *func_0208c88c();                              /* extern */

s16 func_0208f1c0(s32 *arg0) {
    void *temp_r0;

    if (func_0208c3f8((s16) *arg0) != 0) {
        temp_r0 = func_0208c88c();
        if (temp_r0 != NULL) {
            return M2C_FIELD(temp_r0, s16 *, 0x14);
        }
    }
    return 0;
}
