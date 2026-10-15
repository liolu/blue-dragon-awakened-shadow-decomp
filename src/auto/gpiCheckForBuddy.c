#include "m2c.h"

s32 gpiCheckForBuddy(s32 arg0, void *arg1, void *arg2) {
    s32 *temp_r0;
    s32 *temp_r0_2;

    temp_r0 = M2C_FIELD(arg1, s32 **, 8);
    if ((temp_r0 != NULL) && (M2C_FIELD(arg2, s32 *, 0) == *temp_r0)) {
        M2C_FIELD(arg2, void **, 4) = arg1;
        return 0;
    }
    temp_r0_2 = M2C_FIELD(arg1, s32 **, 0xC);
    if ((temp_r0_2 != NULL) && (M2C_FIELD(arg2, s32 *, 0) == *temp_r0_2)) {
        M2C_FIELD(arg2, void **, 4) = arg1;
        return 0;
    }
    return 1;
}
