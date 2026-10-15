#include "m2c.h"

M2C_UNK OS_WakeupThread(M2C_UNK *);                   /* extern */
M2C_UNK WCMi_ResetKeepAliveAlarm();                            /* extern */
extern M2C_UNK wcmCpsifw;
extern M2C_UNK data_0210e5f4;

void WcmCpsifWmCallback(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 0) != 0x12) {
        return;
    }
    M2C_FIELD(&wcmCpsifw, s32 *, 0x24) = (s32) M2C_FIELD(arg0, u16 *, 2);
    if (M2C_FIELD(arg0, u16 *, 2) == 0) {
        WCMi_ResetKeepAliveAlarm();
    }
    OS_WakeupThread(&data_0210e5f4);
}
