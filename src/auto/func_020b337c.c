#include "m2c.h"

extern void *data_ov000_021f6250;

void func_020b337c(void) {
    if (data_ov000_021f6250 == NULL) {
        return;
    }
    M2C_FIELD(data_ov000_021f6250, s32 *, 0x94) = 0x037F4019;
    M2C_FIELD(data_ov000_021f6250, s32 *, 0x90) = 0x13177;
    M2C_FIELD(data_ov000_021f6250, s32 *, 0x9C) = 0x037F4019;
    M2C_FIELD(data_ov000_021f6250, s32 *, 0x98) = 0x13177;
}
