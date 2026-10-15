#include "m2c.h"

M2C_UNK OS_SetThreadPriority(s32, u32);                    /* extern */
s32 func_020072ac(s32);                             /* extern */
extern M2C_UNK sConfig;
extern M2C_UNK OSi_ThreadInfo;

s32 SSLi_RaisePriority(void) {
    s32 temp_r4;
    s32 temp_r5;

    if ((u32) M2C_FIELD(&sConfig, u32 *, 4) >= 0x20U) {
        return -1;
    }
    temp_r5 = M2C_FIELD(&OSi_ThreadInfo, s32 *, 4);
    temp_r4 = func_020072ac(temp_r5);
    OS_SetThreadPriority(temp_r5, M2C_FIELD(&sConfig, u32 *, 4));
    return temp_r4;
}
