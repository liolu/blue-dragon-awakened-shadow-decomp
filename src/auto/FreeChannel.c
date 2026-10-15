#include "m2c.h"

M2C_UNK NNS_SndStrmFreeChannel();                            /* extern */

void FreeChannel(void *arg0) {
    s32 temp_r1;
    s32 temp_r1_2;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x120);
    if (temp_r1 == 0) {
        return;
    }
    temp_r1_2                     = temp_r1 - 1;
    M2C_FIELD(arg0, s32 *, 0x120) = temp_r1_2;
    if (temp_r1_2 != 0) {
        return;
    }
    NNS_SndStrmFreeChannel();
}
