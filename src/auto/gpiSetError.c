#include "m2c.h"

M2C_UNK strzcpy(void *, M2C_UNK, M2C_UNK);    /* extern */

void gpiSetError(void **arg0, s32 arg1, M2C_UNK arg2) {
    void *temp_r4;

    temp_r4 = *arg0;
    strzcpy(temp_r4, arg2, 0x100);
    M2C_FIELD(temp_r4, s32 *, 0x5B8) = arg1;
}
