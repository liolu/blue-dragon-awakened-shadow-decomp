#include "m2c.h"

extern M2C_UNK data_02103840;

void func_0200aa90(s32 arg0) {
    s32 temp_r1;

    temp_r1 = (arg0 * 0xC) + (s32) &data_02103840;
    M2C_FIELD(temp_r1, u8 *, 8) = (u8) (M2C_FIELD(temp_r1, u8 *, 8) + 1);
}
