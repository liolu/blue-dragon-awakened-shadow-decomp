#include "m2c.h"

s32 *func_0206700c(s32, M2C_UNK, M2C_UNK);          /* extern */

void func_02067618(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 *temp_r0;

    temp_r0 = func_0206700c(arg4, arg0, arg1);
    if ((temp_r0 != NULL) && (arg3 != 0)) {
        *temp_r0 = 0x6A;
    }
}
