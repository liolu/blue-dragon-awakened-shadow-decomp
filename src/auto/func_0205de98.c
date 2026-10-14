#include "m2c.h"

s32 func_0205b8ac(s32);                             /* extern */
void *func_0205cf2c();                              /* extern */

s32 func_0205de98(void) {
    void *temp_r0;

    temp_r0 = func_0205cf2c();
    if (M2C_FIELD(temp_r0, s32 *, 0xC) == 0) {
        return 1;
    }
    if (func_0205b8ac(M2C_FIELD(temp_r0, s32 *, 8)) == 0) {
        return 1;
    }
    return 0;
}
