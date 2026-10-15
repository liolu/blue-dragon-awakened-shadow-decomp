#include "m2c.h"

M2C_UNK PXI_Init();                            /* extern */
M2C_UNK PXI_SetFifoRecvCallback(M2C_UNK, M2C_UNK *);          /* extern */
s32 PXI_IsCallbackReady(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK rtcInitialized;
extern M2C_UNK RtcCommonCallback;

void RTC_Init(void) {
    if (M2C_FIELD(&rtcInitialized, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&rtcInitialized, u16 *, 0)    = 1U;
    M2C_FIELD(&rtcInitialized, s32 *, 0xC)  = 0;
    M2C_FIELD(&rtcInitialized, s32 *, 0x10) = 0;
    M2C_FIELD(&rtcInitialized, s32 *, 0x28) = 0;
    M2C_FIELD(&rtcInitialized, s32 *, 0x14) = 0;
    M2C_FIELD(&rtcInitialized, s32 *, 0x18) = 0;
    PXI_Init();
    do {

    } while (PXI_IsCallbackReady(5, 1) == 0);
    PXI_SetFifoRecvCallback(5, &RtcCommonCallback);
}
