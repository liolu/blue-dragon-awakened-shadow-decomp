#include "m2c.h"

s32 gpiFixBuddyIndices(s32 arg0, void *arg1, s32 arg2) {
    s32 *temp_r1;
    s32 *temp_r3;
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r3 = M2C_FIELD(arg1, s32 **, 8);
    if ((temp_r3 != NULL) && (temp_r0 = *temp_r3, (temp_r0 > arg2))) {
        *temp_r3 = temp_r0 - 1;
    } else {
        temp_r1 = M2C_FIELD(arg1, s32 **, 0xC);
        if (temp_r1 != NULL) {
            temp_r0_2 = *temp_r1;
            if (temp_r0_2 > arg2) {
                *temp_r1 = temp_r0_2 - 1;
            }
        }
    }
    return 1;
}
