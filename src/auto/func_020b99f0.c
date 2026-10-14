#include "m2c.h"

void *func_020b60e8();                              /* extern */

s32 func_020b99f0(void) {
    void *temp_r0;

    temp_r0 = func_020b60e8();
    if (temp_r0 == NULL) {
        return 0;
    }
    M2C_FIELD(temp_r0, u8 *, 0x54) = (u8) (M2C_FIELD(temp_r0, u8 *, 0x54) | 1);
    return 1;
}
