#include "engine.h"
#include "m2c.h"

M2C_UNK OS_DisableInterrupts(void);
void OS_RestoreInterrupts(M2C_UNK);

extern void *wcmw;

s32 WCM_GetPhase(void) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = OS_DisableInterrupts();
    var_r4  = 0;
    if (wcmw != NULL) {
        var_r4 = M2C_FIELD(wcmw, s32 *, 0x2260);
    }
    OS_RestoreInterrupts(temp_r0);
    return var_r4;
}
