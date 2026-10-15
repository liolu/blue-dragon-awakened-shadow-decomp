#include "m2c.h"

s32 WM_SetDCFData(M2C_UNK *, void *, void *, M2C_UNK); /* extern */
void *WCMi_GetSystemWork();                              /* extern */
s32 WcmCpsifTryLockMutexInIRQ(M2C_UNK *);                       /* extern */
M2C_UNK WcmCpsifUnlockMutexInIRQ(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0210e5fc;
extern M2C_UNK WcmCpsifKACallback;

void WCMi_CpsifSendNullPacket(void) {
    void *temp_r0;

    temp_r0 = WCMi_GetSystemWork();
    if (temp_r0 == NULL) {
        return;
    }
    if (M2C_FIELD(temp_r0, s32 *, 0x2260) != 9) {
        return;
    }
    if (M2C_FIELD(temp_r0, u8 *, 0x226B) == 1) {
        return;
    }
    if (WcmCpsifTryLockMutexInIRQ(&data_0210e5fc) == 0) {
        return;
    }
    if (WM_SetDCFData(&WcmCpsifKACallback, temp_r0 + 0x2144, temp_r0 + 0xF00, 0) == 2) {
        return;
    }
    WcmCpsifUnlockMutexInIRQ(&data_0210e5fc);
}
