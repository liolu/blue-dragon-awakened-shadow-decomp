#include "m2c.h"
#include "engine.h"

s32 func_02078c60(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r1;
    u16 temp_ip;

    temp_ip = M2C_FIELD(arg1, u16 *, 0);
    if ((s32) temp_ip > arg2) {
        return 0;
    }
    if (((s32) temp_ip <= arg2) && ((s32) M2C_FIELD(arg1, u16 *, 2) >= arg2)) {
        return arg1 + 8 + ((arg2 - temp_ip) * 3);
    }
    temp_r1 = M2C_FIELD(arg0, s32 *, 4) + M2C_FIELD(arg1, s32 *, 4);
    if (temp_r1 == 0) {
        return 0;
    }
    return func_02078c60(arg0, temp_r1, arg2);
}
