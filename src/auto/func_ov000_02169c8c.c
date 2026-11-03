#include "m2c.h"

void func_ov000_02169c8c(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x70) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x74) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x78) = (s32) M2C_FIELD(arg1, s32 *, 8);
}
