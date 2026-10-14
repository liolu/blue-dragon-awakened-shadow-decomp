#include "m2c.h"

extern u8 data_02167176;
extern u8 data_02167187;

void func_020b04cc(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x34) = 0;
    data_02167176 &= ~2;
    data_02167187 &= ~1;
    M2C_FIELD(arg0, s32 *, 0x38) = -1;
}
