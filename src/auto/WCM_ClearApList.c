#include "engine.h"
#include "m2c.h"

M2C_UNK OS_DisableInterrupts(void);
void OS_RestoreInterrupts(M2C_UNK);
M2C_UNK MI_CpuFill8(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK WCMi_GetSystemWork(void);

void WCM_ClearApList(void) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r2;
    s32 temp_r4;

    temp_r4 = OS_DisableInterrupts();
    temp_r0 = WCMi_GetSystemWork();
    if (temp_r0 == 0) {
        OS_RestoreInterrupts(temp_r4);
        return;
    }
    temp_r0_2 = M2C_FIELD(temp_r0, s32 *, 0x2270);
    if (temp_r0_2 != 0) {
        temp_r2 = M2C_FIELD(temp_r0, s32 *, 0x2274);
        if (temp_r2 > 0) {
            MI_CpuFill8(temp_r0_2, 0, temp_r2);
        }
    }
    OS_RestoreInterrupts(temp_r4);
}
