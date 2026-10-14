#include "m2c.h"

M2C_UNK func_0206a9ac(void *, M2C_UNK, M2C_UNK);    /* extern */

void func_0206ad24(void **arg0, s32 arg1, M2C_UNK arg2) {
    void *temp_r4;

    temp_r4 = *arg0;
    func_0206a9ac(temp_r4, arg2, 0x100);
    M2C_FIELD(temp_r4, s32 *, 0x5B8) = arg1;
}
