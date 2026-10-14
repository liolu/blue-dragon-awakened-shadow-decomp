#include "m2c.h"

void *func_02081f00(M2C_UNK, M2C_UNK);              /* extern */

s32 func_02081afc(M2C_UNK arg0, s32 arg1, void *arg2) {
    void *temp_r0;

    temp_r0 = func_02081f00(arg0, 0);
    if (temp_r0 == NULL) {
        return 0;
    }
    M2C_FIELD(temp_r0, s8 *, 1) = 0;
    M2C_FIELD(temp_r0, s32 *, 0xC) = arg1;
    M2C_FIELD(temp_r0, s32 *, 8) = (s32) M2C_FIELD(arg2, s32 *, 0);
    M2C_FIELD(temp_r0, u8 *, 3) = (u8) M2C_FIELD(arg2, u8 *, 0xD);
    M2C_FIELD(temp_r0, s32 *, 0x10) = (s32) M2C_FIELD(arg2, s32 *, 4);
    M2C_FIELD(temp_r0, u8 *, 2) = (u8) M2C_FIELD(arg2, u8 *, 0xC);
    M2C_FIELD(temp_r0, s8 *, 0x14) = (s8) M2C_FIELD(arg2, s8 *, 0xE);
    M2C_FIELD(temp_r0, u8 *, 0x15) = (u8) M2C_FIELD(arg2, u8 *, 0xF);
    M2C_FIELD(temp_r0, s16 *, 0x16) = (s16) M2C_FIELD(arg2, s16 *, 0x10);
    M2C_FIELD(temp_r0, s8 *, 0x18) = (s8) M2C_FIELD(arg2, s8 *, 0x12);
    M2C_FIELD(temp_r0, s8 *, 0x19) = (s8) M2C_FIELD(arg2, s8 *, 0x13);
    M2C_FIELD(temp_r0, u8 *, 0x1A) = (u8) M2C_FIELD(arg2, u8 *, 0x14);
    M2C_FIELD(temp_r0, u8 *, 0x1B) = (u8) M2C_FIELD(arg2, u8 *, 0x15);
    M2C_FIELD(temp_r0, s32 *, 0x20) = (s32) M2C_FIELD(arg2, s32 *, 8);
    M2C_FIELD(temp_r0, s8 *, 0x1D) = -1;
    M2C_FIELD(temp_r0, s8 *, 0) = 1;
    return 1;
}
