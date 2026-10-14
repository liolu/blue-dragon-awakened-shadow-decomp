#include "m2c.h"

void func_020bccc8(void *arg0, s32 arg1) {
    s16 temp_r2;

    M2C_FIELD(arg0, s16 *, 0x14) = (s16) (M2C_FIELD(arg0, s16 *, 0x14) + arg1);
    temp_r2 = M2C_FIELD(arg0, s16 *, 0x14);
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC) > (s32) temp_r2) {
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) temp_r2;
    }
}
