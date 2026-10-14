#include "m2c.h"

extern s32 data_0210f060;

void func_02059bcc(s32 arg0) {
    s32 temp_r1;

    if (data_0210f060 == 0) {
        return;
    }
    temp_r1 = arg0 * 0x30;
    M2C_FIELD((data_0210f060 + temp_r1), s32 *, 0xC) = 0;
    M2C_FIELD((data_0210f060 + temp_r1), s32 *, 0x10) = 0;
    M2C_FIELD((data_0210f060 + temp_r1), s32 *, 0x14) = 0;
    M2C_FIELD((data_0210f060 + temp_r1), s32 *, 0x18) = 0;
    M2C_FIELD((data_0210f060 + temp_r1), s8 *, 0x1C) = 0;
    M2C_FIELD((data_0210f060 + temp_r1), s32 *, 4) = 0;
    M2C_FIELD((data_0210f060 + temp_r1), s32 *, 8) = 0;
    M2C_FIELD((data_0210f060 + temp_r1), s8 *, 0x1D) = 0;
    M2C_FIELD((data_0210f060 + temp_r1), s16 *, 0x22) = 0;
}
