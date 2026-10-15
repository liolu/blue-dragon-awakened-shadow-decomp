#include "m2c.h"

void func_020805b4(s32 arg0, s8 arg1, s32 arg2) {
    s32 temp_ip;

    temp_ip                         = (arg1 * 0xC) + arg0;
    M2C_FIELD(temp_ip, s8 *, 0xC)   = arg1;
    M2C_FIELD(temp_ip, s32 *, 0x10) = arg2;
    if (M2C_FIELD(arg0, s8 *, 0x1FC) != arg1) {
        return;
    }
    if ((arg2 != 0x1869F) && (arg2 != -1)) {
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x1FC) = -1;
}
