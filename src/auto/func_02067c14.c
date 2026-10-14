#include "m2c.h"

M2C_UNK func_0205be7c(s32, s32);                    /* extern */
s32 func_02067ac8(void **, M2C_UNK, s32 *);         /* extern */

void func_02067c14(void **arg0, M2C_UNK arg1) {
    s32 sp0;
    void *temp_r4;

    temp_r4 = *arg0;
    if (func_02067ac8(arg0, arg1, &sp0) == 0) {
        return;
    }
    func_0205be7c(M2C_FIELD(temp_r4, s32 *, 0x5C8), sp0);
}
