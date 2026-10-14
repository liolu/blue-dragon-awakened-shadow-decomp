#include "m2c.h"

void *func_0205cf2c();                              /* extern */
M2C_UNK func_0206d12c(s32);                         /* extern */

s32 func_0205dc5c(void) {
    void *temp_r0;

    temp_r0 = func_0205cf2c();
    if (M2C_FIELD(temp_r0, s32 *, 0xC) == 0) {
        return 3;
    }
    func_0206d12c(M2C_FIELD(temp_r0, s32 *, 0));
    return 0;
}
