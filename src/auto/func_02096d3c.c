#include "m2c.h"

void func_02096d3c(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_ip;

    temp_ip = (arg1 * 0xC) + arg0;
    if (M2C_FIELD(temp_ip, s32 *, 0x40) != 0) {
        M2C_FIELD(temp_ip, s32 *, 0x44) = arg2;
        M2C_FIELD(temp_ip, s32 *, 0x48) = arg3;
    }
}
