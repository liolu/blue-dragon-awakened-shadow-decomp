#include "m2c.h"

void func_ov000_021c24c4(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x4CC) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x4D0) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x4D4) = (s32) M2C_FIELD(arg1, s32 *, 8);
}
