#include "m2c.h"

s32 SOCLi_StartupCommandPacketQueue(s32);                             /* extern */
s32 SOCL_CreateSocket(M2C_UNK *);                       /* extern */
extern void *SOCLiConfigPtr;
extern M2C_UNK SOCLSocketParamUDPSend;
extern M2C_UNK SOCLiYieldWait;

s32 SOCLi_StartupSOCL(void) {
    s32 temp_r0;

    temp_r0 = SOCLi_StartupCommandPacketQueue(M2C_FIELD(SOCLiConfigPtr, s32 *, 0x20));
    if (temp_r0 >= 0) {
        M2C_FIELD(&SOCLiYieldWait, s32 *, 0xC) = SOCL_CreateSocket(&SOCLSocketParamUDPSend);
    }
    return temp_r0;
}
