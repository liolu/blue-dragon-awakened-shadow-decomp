#include "m2c.h"

s32 OS_DisableInterrupts();                                /* extern */
M2C_UNK OS_RestoreInterrupts(s32);                         /* extern */
void *WCMi_GetSystemWork();                              /* extern */

s32 WCM_CountApList(void) {
    s32 *temp_r1;
    s32 temp_r4;
    s32 var_r5;
    void *temp_r0;

    temp_r4 = OS_DisableInterrupts();
    temp_r0 = WCMi_GetSystemWork();
    var_r5  = 0;
    if (temp_r0 == NULL) {
        OS_RestoreInterrupts(temp_r4);
        return 0;
    }
    temp_r1 = M2C_FIELD(temp_r0, s32 **, 0x2270);
    if ((temp_r1 != NULL) && ((u32) M2C_FIELD(temp_r0, u32 *, 0x2274) > 0xCU)) {
        var_r5 = *temp_r1;
    }
    OS_RestoreInterrupts(temp_r4);
    return var_r5;
}
