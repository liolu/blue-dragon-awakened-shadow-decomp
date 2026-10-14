#include "m2c.h"

void *func_020b60e8();                              /* extern */

s32 func_020ba5ac(void *arg0) {
    void *temp_r0;

    temp_r0 = func_020b60e8();
    if (temp_r0 == NULL) {
        return 0;
    }
    M2C_FIELD(temp_r0, u8 *, 0x57) = (u8) (M2C_FIELD(temp_r0, u8 *, 0x57) + M2C_FIELD(arg0, s16 *, 0x14));
    return 1;
}
