#include "m2c.h"

M2C_UNK OS_SetAlarm(void *, s32, M2C_UNK, M2C_UNK *, s32); /* extern */
M2C_UNK OS_CancelAlarm(void *);                      /* extern */
s32 OS_DisableInterrupts();                                /* extern */
M2C_UNK OS_RestoreInterrupts(s32);                         /* extern */
extern void *wcmw;
extern M2C_UNK WcmKeepAliveAlarm;

void WCMi_ResetKeepAliveAlarm(void) {
    s32 temp_r4;

    temp_r4 = OS_DisableInterrupts();
    OS_CancelAlarm(wcmw + 0x22CC);
    if (M2C_FIELD(wcmw, s32 *, 0x2260) == 9) {
        OS_SetAlarm(wcmw + 0x22CC, 0x022F5341, 0, &WcmKeepAliveAlarm, 0);
    }
    OS_RestoreInterrupts(temp_r4);
}
