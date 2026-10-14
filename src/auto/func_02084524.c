#include "m2c.h"

s32 func_ov000_021c0650(M2C_UNK *, s32, s16);       /* extern */
extern M2C_UNK data_ov000_021f4d24;

s32 func_02084524(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_r1 == 0) {
        return -1;
    }
    return func_ov000_021c0650(&data_ov000_021f4d24, temp_r1, (s16) M2C_FIELD(arg0, s32 *, 4));
}
