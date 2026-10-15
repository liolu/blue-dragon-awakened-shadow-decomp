#include "engine.h"
#include "m2c.h"

M2C_UNK OS_DisableInterrupts(void);
void OS_RestoreInterrupts(M2C_UNK);
M2C_UNK WCMi_GetSystemWork(void);

s32 WCM_GetApMacAddress(void) {
    s32 temp_r0;
    s32 temp_r4;
    s32 var_r5;

    var_r5  = 0;
    temp_r4 = WCMi_GetSystemWork();
    temp_r0 = OS_DisableInterrupts();
    if ((temp_r4 != 0) && (M2C_FIELD(temp_r4, s32 *, 0x2260) == 9) && (M2C_FIELD(temp_r4, u8 *, 0x226B) == 0)) {
        var_r5 = temp_r4 + 0x2144;
    }
    OS_RestoreInterrupts(temp_r0);
    return var_r5;
}
