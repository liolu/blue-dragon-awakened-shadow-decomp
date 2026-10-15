#include "engine.h"
#include "m2c.h"

void OS_InitTick(void);
M2C_UNK OS_IsTickAvailable(void);
void OS_InitAlarm(void);
M2C_UNK OS_IsAlarmAvailable(void);
void OS_CreateAlarm(M2C_UNK);
M2C_UNK OS_DisableInterrupts(void);
void OS_RestoreInterrupts(M2C_UNK);
void WcmInitOption(void);
void WCMi_InitCpsif(void);

extern s32 wcmw;

s32 WCM_Init(s32 arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = OS_DisableInterrupts();
    if (wcmw != 0) {
        OS_RestoreInterrupts(temp_r0);
        return 1;
    }
    if (arg0 == 0) {
        OS_RestoreInterrupts(temp_r0);
        return 1;
    }
    if (arg0 & 0x1F) {
        OS_RestoreInterrupts(temp_r0);
        return 1;
    }
    if ((u32) arg1 < 0x2300U) {
        OS_RestoreInterrupts(temp_r0);
        return 6;
    }
    wcmw                           = arg0;
    M2C_FIELD(arg0, s32 *, 0x2260) = 1;
    M2C_FIELD(wcmw, s16 *, 0x2280) = 0;
    M2C_FIELD(wcmw, s16 *, 0x2268) = 0;
    M2C_FIELD(wcmw, s8 *, 0x226A)  = 0;
    M2C_FIELD(wcmw, s8 *, 0x226B)  = 0;
    M2C_FIELD(wcmw, s16 *, 0x2282) = 0;
    M2C_FIELD(wcmw, s16 *, 0x22F8) = 0;
    WcmInitOption();
    WCMi_InitCpsif();
    if (OS_IsTickAvailable() == 0) {
        OS_InitTick();
    }
    if (OS_IsAlarmAvailable() == 0) {
        OS_InitAlarm();
    }
    OS_CreateAlarm(wcmw + 0x22CC);
    OS_RestoreInterrupts(temp_r0);
    return 0;
}
