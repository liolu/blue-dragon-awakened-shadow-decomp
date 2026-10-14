#include "m2c.h"

M2C_UNK func_02081090(s32, s16);                    /* extern */
extern s32 data_02164e04;

void func_020bd2b8(void *arg0, s16 arg1) {
    if (arg1 == -1) {
        return;
    }
    M2C_FIELD(arg0, s16 *, 0) = arg1;
    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        func_02081090(data_02164e04 + 0x2C, M2C_FIELD(arg0, s16 *, 0));
    }
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 1);
}
