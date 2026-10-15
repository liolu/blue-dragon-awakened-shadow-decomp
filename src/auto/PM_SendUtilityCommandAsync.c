#include "engine.h"
#include "m2c.h"

M2C_UNK OS_DisableInterrupts(void);
void OS_RestoreInterrupts(M2C_UNK);
M2C_UNK func_0200f23c(void);
void PMi_SendPxiData(M2C_UNK);

extern M2C_UNK data_021039ec;

s32 PM_SendUtilityCommandAsync(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_r5;

    temp_r5 = OS_DisableInterrupts();
    if (func_0200f23c() == 0) {
        OS_RestoreInterrupts(temp_r5);
        return 1;
    }
    M2C_FIELD(&data_021039ec, s32 *, 0x20) = arg3;
    M2C_FIELD(&data_021039ec, s32 *, 0x24) = arg4;
    M2C_FIELD(&data_021039ec, s32 *, 0x28) = arg2;
    PMi_SendPxiData((u8) arg0 | 0x02006100);
    PMi_SendPxiData(0x01010000 | (u16) arg1);
    OS_RestoreInterrupts(temp_r5);
    return 0;
}
