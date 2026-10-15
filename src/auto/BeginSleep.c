#include "m2c.h"

M2C_UNK SND_StopTimer(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK SND_FlushCommand(M2C_UNK);                     /* extern */
M2C_UNK SND_WaitForCommandProc(s32);                         /* extern */
s32 SND_GetCurrentCommandTag();                                /* extern */
M2C_UNK NNSi_SndCaptureBeginSleep();                            /* extern */

void BeginSleep(void) {
    s32 temp_r4;

    NNSi_SndCaptureBeginSleep();
    SND_StopTimer(0, 0, 0, 0);
    temp_r4 = SND_GetCurrentCommandTag();
    SND_FlushCommand(1);
    SND_WaitForCommandProc(temp_r4);
}
