#include "m2c.h"

void func_ov000_021c2504(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x4E4) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x4E8) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x4EC) = (s32) M2C_FIELD(arg1, s32 *, 8);
}
