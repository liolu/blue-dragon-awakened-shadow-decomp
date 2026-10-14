#include "m2c.h"

s32 func_ov000_021bec20(M2C_UNK *);                 /* extern */
extern M2C_UNK data_ov000_021f4924;

void func_020bd5d4(s32 *arg0) {
    s32 temp_r0;

    if ((s32) *arg0 <= 0) {
        return;
    }
    temp_r0 = *arg0 - func_ov000_021bec20(&data_ov000_021f4924);
    *arg0 = temp_r0;
    if (temp_r0 < 0) {
        *arg0 = 0;
    }
}
