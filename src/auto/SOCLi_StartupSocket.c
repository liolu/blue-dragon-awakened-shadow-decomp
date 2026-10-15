#include "m2c.h"

s32 OS_DisableInterrupts();                                /* extern */
M2C_UNK OS_RestoreInterrupts(s32);                         /* extern */
M2C_UNK MI_CpuFill8(s32, M2C_UNK, s32);           /* extern */
s32 SOCLi_GetSizeSocket();                                /* extern */
M2C_UNK SOCLi_InitSocket(s32, M2C_UNK);                /* extern */
M2C_UNK SOCLi_SocketRegister(s32);                         /* extern */
extern void *SOCLiConfigPtr;

s32 SOCLi_StartupSocket(M2C_UNK arg0) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r6;

    temp_r4 = SOCLi_GetSizeSocket();
    temp_r6 = OS_DisableInterrupts();
    temp_r0 = M2C_FIELD(SOCLiConfigPtr, s32(**)(s32), 0x18)(temp_r4);
    if (temp_r0 != 0) {
        MI_CpuFill8(temp_r0, 0, temp_r4);
        SOCLi_InitSocket(temp_r0, arg0);
        SOCLi_SocketRegister(temp_r0);
    }
    OS_RestoreInterrupts(temp_r6);
    return temp_r0;
}
