#include "m2c.h"

s32 *func_0207d4a4(M2C_UNK);                        /* extern */

void func_020c3660(void *arg0) {
    s32 *temp_r0;

    if (M2C_FIELD(arg0, s32 **, 0xC) != NULL) {
        return;
    }
    temp_r0 = func_0207d4a4(4);
    if (temp_r0 != NULL) {
        *temp_r0 = -1;
    }
    M2C_FIELD(arg0, s32 **, 0xC) = temp_r0;
}
