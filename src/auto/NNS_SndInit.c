#include "m2c.h"

M2C_UNK SND_Init();                            /* extern */
M2C_UNK PM_PrependPreSleepCallback(M2C_UNK *);                   /* extern */
M2C_UNK PM_AppendPostSleepCallback(M2C_UNK *);                   /* extern */
M2C_UNK NNSi_SndInitResourceMgr();                            /* extern */
M2C_UNK NNSi_SndPlayerInit();                            /* extern */
M2C_UNK NNSi_SndCaptureInit();                            /* extern */
extern M2C_UNK sCurDriverInfo;
extern M2C_UNK sPreSleepCallback;
extern M2C_UNK sPostSleepCallback;
extern M2C_UNK BeginSleep;
extern M2C_UNK EndSleep;

void NNS_SndInit(void) {
    if (M2C_FIELD(&sCurDriverInfo, s32 *, 0xC) != 0) {
        return;
    }
    M2C_FIELD(&sCurDriverInfo, s32 *, 0xC) = 1;
    SND_Init();
    M2C_FIELD(&sCurDriverInfo, M2C_UNK **, 0x10) = &BeginSleep;
    M2C_FIELD(&sCurDriverInfo, s32 *, 0x14)      = 0;
    M2C_FIELD(&sCurDriverInfo, M2C_UNK **, 0x1C) = &EndSleep;
    M2C_FIELD(&sCurDriverInfo, s32 *, 0x20)      = 0;
    PM_PrependPreSleepCallback(&sPreSleepCallback);
    PM_AppendPostSleepCallback(&sPostSleepCallback);
    NNSi_SndInitResourceMgr();
    NNSi_SndCaptureInit();
    NNSi_SndPlayerInit();
    M2C_FIELD(&sCurDriverInfo, s8 *, 0)  = -1;
    M2C_FIELD(&sCurDriverInfo, s32 *, 4) = 1;
}
