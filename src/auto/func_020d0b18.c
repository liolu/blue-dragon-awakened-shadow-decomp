#include "m2c.h"

M2C_UNK func_020986e0(s32);                         /* extern */
M2C_UNK func_020d0720(s32);                         /* extern */
extern s32 data_0216581c;

void func_020d0b18(s32 arg0, s32 arg1) {
    s32 temp_r4;

    temp_r4 = (arg1 * 0x18) + (arg0 + 0xF30);
    if (M2C_FIELD(temp_r4, s32 *, 8) == 0) {
        return;
    }
    if (M2C_FIELD(temp_r4, s16 *, 0) != -1) {
        func_020986e0(data_0216581c);
        M2C_FIELD(temp_r4, s16 *, 0) = -1;
    }
    if (M2C_FIELD(temp_r4, s32 *, 4) != -1) {
        func_020d0720(arg0);
        M2C_FIELD(temp_r4, s32 *, 4) = -1;
    }
    M2C_FIELD(temp_r4, s32 *, 8) = 0;
    M2C_FIELD(temp_r4, s32 *, 0xC) = 0;
    M2C_FIELD(temp_r4, s32 *, 0x10) = 0;
}
