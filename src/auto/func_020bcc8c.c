#include "m2c.h"

void func_020bcc8c(void *arg0, s32 arg1) {
    s32 temp_r2;

    temp_r2 = M2C_FIELD(arg0, s32 *, 0x10) + arg1;
    M2C_FIELD(arg0, s32 *, 0x10) = temp_r2;
    if ((s32) M2C_FIELD(arg0, s32 *, 8) > temp_r2) {
        M2C_FIELD(arg0, s32 *, 8) = temp_r2;
    }
}
