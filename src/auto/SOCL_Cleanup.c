#include "m2c.h"

M2C_UNK OS_Sleep(M2C_UNK);                     /* extern */
M2C_UNK CPS_SetScavengerCallback(M2C_UNK);                     /* extern */
M2C_UNK CPS_Cleanup();                            /* extern */
s32 SOCLi_CleanupCommandPacketQueue();                                /* extern */
s32 SOCL_CalmDown();                                /* extern */
extern void *SOCLiConfigPtr;
extern s32 CPSMyIp;
extern s32 SOCLiRequestedIP;
extern M2C_UNK SOCLiCPSConfig;

s32 SOCL_Cleanup(void) {
    s32 temp_r0;

    if (SOCLiRequestedIP == 0) {
        SOCLiRequestedIP = CPSMyIp;
    }
    if (SOCL_CalmDown() == -0x1A) {
        do {
            OS_Sleep(0x64);
        } while (SOCL_CalmDown() == -0x1A);
    }
    temp_r0 = SOCLi_CleanupCommandPacketQueue();
    if (temp_r0 >= 0) {
        CPS_Cleanup();
        CPS_SetScavengerCallback(0);
        if (M2C_FIELD(SOCLiConfigPtr, s32 *, 0x28) == 0) {
            M2C_FIELD(SOCLiConfigPtr, M2C_UNK(**)(s32), 0x1C)(M2C_FIELD(&SOCLiCPSConfig, s32 *, 0x1C));
        }
        SOCLiConfigPtr = NULL;
    }
    return temp_r0;
}
