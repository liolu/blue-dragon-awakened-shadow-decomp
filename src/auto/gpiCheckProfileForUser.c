#include "m2c.h"

s32 strcmp(s32, s32);                        /* extern */

s32 gpiCheckProfileForUser(s32 arg0, void *arg1, void *arg2) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg1, void **, 0x10);
    if ((temp_r4 != NULL) && (strcmp(M2C_FIELD(arg2, s32 *, 0), M2C_FIELD(temp_r4, s32 *, 0)) == 0) &&
        (strcmp(M2C_FIELD(arg2, s32 *, 4), M2C_FIELD(temp_r4, s32 *, 8)) == 0)) {
        *M2C_FIELD(arg2, void ***, 8) = arg1;
        M2C_FIELD(arg2, s32 *, 0xC)   = 1;
        return 0;
    }
    return 1;
}
