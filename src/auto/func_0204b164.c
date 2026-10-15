#include "m2c.h"

s32 strlen();                                /* extern */
M2C_UNK strcpy(M2C_UNK, s32);                /* extern */
s32 func_0204b0b8();                                /* extern */

s32 func_0204b164(s32 arg0, s32 arg1, M2C_UNK arg2, s32 arg3) {
    s32 temp_r0;

    temp_r0 = func_0204b0b8();
    if (temp_r0 == 0) {
        return 0;
    }
    if (strlen() >= arg3) {
        return 0;
    }
    strcpy(arg2, temp_r0);
    return 1;
}
