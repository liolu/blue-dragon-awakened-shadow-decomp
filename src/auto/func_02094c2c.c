#include "m2c.h"

s32 func_ov000_021bec20(M2C_UNK *);                 /* extern */
extern M2C_UNK data_ov000_021f4924;

void func_02094c2c(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0                       = M2C_FIELD(arg0, s32 *, 0x45C) - func_ov000_021bec20(&data_ov000_021f4924);
    M2C_FIELD(arg0, s32 *, 0x45C) = temp_r0;
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0x45C) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x45C) > 0) {
        return;
    }
    temp_r0_2                     = M2C_FIELD(arg0, s32 *, 0x460) - func_ov000_021bec20(&data_ov000_021f4924);
    M2C_FIELD(arg0, s32 *, 0x460) = temp_r0_2;
    if (temp_r0_2 < 0) {
        M2C_FIELD(arg0, s32 *, 0x460) = 0;
    }
}
