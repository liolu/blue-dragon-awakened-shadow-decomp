#include "engine.h"
#include "m2c.h"

M2C_UNK OS_DisableInterrupts(void);
void OS_RestoreInterrupts(M2C_UNK);

extern M2C_UNK wcmCpsifw;

void WCM_SetRecvDCFCallback(s32 arg0) {
    s32 temp_r0;

    temp_r0                            = OS_DisableInterrupts();
    M2C_FIELD(&wcmCpsifw, s32 *, 0x28) = arg0;
    OS_RestoreInterrupts(temp_r0);
}
