#include "m2c.h"

void *func_020d09c4();                              /* extern */

void func_020d1010(void) {
    void *temp_r0;

    temp_r0 = func_020d09c4();
    if (temp_r0 == NULL) {
        return;
    }
    M2C_FIELD(temp_r0, s32 *, 0x14) = 0;
    M2C_FIELD(temp_r0, s32 *, 0xC) = 0;
    M2C_FIELD(temp_r0, s32 *, 0x10) = 0;
}
