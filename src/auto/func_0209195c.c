#include "m2c.h"

void func_0209195c(void *arg0) {
    s32 temp_r1_3;
    u8 temp_r1;
    u8 temp_r1_2;

    M2C_FIELD(arg0, s32 *, 0x1E0) = -1;
    M2C_FIELD(arg0, s32 *, 0x1E4) = 0;
    M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) M2C_FIELD(arg0, u16 *, 0xE8);
    M2C_FIELD(arg0, s32 *, 0x1EC) = 0;
    M2C_FIELD(arg0, s32 *, 0x1FC) = 0;
    temp_r1                       = M2C_FIELD(arg0, u8 *, 0xF0);
    if (temp_r1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) temp_r1;
    }
    temp_r1_2 = M2C_FIELD(arg0, u8 *, 0xF1);
    if (temp_r1_2 != 0) {
        M2C_FIELD(arg0, s32 *, 0x1EC) = (s32) temp_r1_2;
    }
    temp_r1_3 = M2C_FIELD(arg0, s32 *, 0x204);
    if ((temp_r1_3 != 3) && (temp_r1_3 != 4)) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x1FC) = 0x4650;
}
