#include "m2c.h"

void *func_0205cf2c();                              /* extern */

u16 func_0205dcc4(void) {
    void *temp_r0;

    temp_r0 = func_0205cf2c();
    if (M2C_FIELD(temp_r0, s32 *, 0xC) != 0) {
        return M2C_FIELD(temp_r0, u16 *, 0x38);
    }
    return 0U;
}
