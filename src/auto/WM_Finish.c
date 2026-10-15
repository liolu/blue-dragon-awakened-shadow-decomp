#include "m2c.h"

s32 OS_DisableInterrupts();                                /* extern */
M2C_UNK OS_RestoreInterrupts(s32);                         /* extern */
M2C_UNK PXI_SetFifoRecvCallback(M2C_UNK, M2C_UNK);            /* extern */
s32 WMi_CheckInitialized();                                /* extern */
s32 WMi_CheckStateEx(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK WmClearFifoRecvFlag();                            /* extern */
extern M2C_UNK wmInitialized;

s32 WM_Finish(void) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r4 = OS_DisableInterrupts();
    if (WMi_CheckInitialized() != 0) {
        OS_RestoreInterrupts(temp_r4);
        return 3;
    }
    temp_r0 = WMi_CheckStateEx(1, 0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    WmClearFifoRecvFlag();
    PXI_SetFifoRecvCallback(0xA, 0);
    M2C_FIELD(&wmInitialized, s32 *, 4) = 0;
    M2C_FIELD(&wmInitialized, s16 *, 0) = 0;
    OS_RestoreInterrupts(temp_r4);
    return 0;
}
