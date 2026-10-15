#include "engine.h"
#include "m2c.h"

void OS_SetThreadPriority(M2C_UNK, M2C_UNK);

extern M2C_UNK OSi_ThreadInfo;

void func_0203cb1c(s32 arg0) {
    if ((u32) arg0 >= 0x20U) {
        return;
    }
    OS_SetThreadPriority(M2C_FIELD(&OSi_ThreadInfo, s32 *, 4), arg0);
}
