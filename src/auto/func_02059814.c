#include "m2c.h"

void *func_02059c74();                              /* extern */
s32 func_02059ca8(M2C_UNK);                         /* extern */

s32 func_02059814(M2C_UNK arg0, s32 arg1, s32 arg2) {
    void *temp_r4;

    temp_r4 = func_02059c74();
    if (func_02059ca8(arg0) == 2) {
        return 0;
    }
    M2C_FIELD(temp_r4, s32 *, 4)    = arg1;
    M2C_FIELD(temp_r4, s32 *, 8)    = arg2;
    M2C_FIELD(temp_r4, s8 *, 0x1D)  = 1;
    M2C_FIELD(temp_r4, s32 *, 0x10) = 0;
    M2C_FIELD(temp_r4, s32 *, 0x18) = 0;
    return 1;
}
