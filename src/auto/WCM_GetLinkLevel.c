#include "m2c.h"

s32 OS_DisableInterrupts();                                /* extern */
M2C_UNK OS_RestoreInterrupts(s32);                         /* extern */
void *WCMi_GetSystemWork();                              /* extern */
s32 WcmGetLinkLevel();                                /* extern */

s32 WCM_GetLinkLevel(void) {
    s32 temp_r4;
    s32 var_r5;
    void *temp_r0;

    temp_r4 = OS_DisableInterrupts();
    temp_r0 = WCMi_GetSystemWork();
    var_r5  = 0;
    if ((temp_r0 != NULL) && (M2C_FIELD(temp_r0, s32 *, 0x2260) == 9)) {
        var_r5 = WcmGetLinkLevel();
    }
    OS_RestoreInterrupts(temp_r4);
    return var_r5;
}
