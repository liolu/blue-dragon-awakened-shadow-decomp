#include "engine.h"
#include "m2c.h"

M2C_UNK OS_DisableInterrupts(void);
void OS_RestoreInterrupts(M2C_UNK);
M2C_UNK RTCi_ReadRawTimeAsync(void);

extern M2C_UNK rtcInitialized;

s32 RTC_GetTimeAsync(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;

    temp_r0 = OS_DisableInterrupts();
    if (M2C_FIELD(&rtcInitialized, s32 *, 0xC) != 0) {
        OS_RestoreInterrupts(temp_r0);
        return 1;
    }
    M2C_FIELD(&rtcInitialized, s32 *, 0xC) = 1;
    OS_RestoreInterrupts(temp_r0);
    M2C_FIELD(&rtcInitialized, s32 *, 0x20) = 1;
    M2C_FIELD(&rtcInitialized, s32 *, 0x24) = 0;
    M2C_FIELD(&rtcInitialized, s32 *, 0x14) = arg0;
    M2C_FIELD(&rtcInitialized, s32 *, 0x10) = arg1;
    M2C_FIELD(&rtcInitialized, s32 *, 0x1C) = arg2;
    if (RTCi_ReadRawTimeAsync() != 0) {
        return 0;
    }
    return 3;
}
