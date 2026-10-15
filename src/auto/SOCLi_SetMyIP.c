#include "m2c.h"

extern void *SOCLiConfigPtr;
extern s32 CPSNetMask;
extern s32 CPSGatewayIp;
extern s32 CPSMyIp;
extern M2C_UNK CPSDnsIp;
extern M2C_UNK SOCLiYieldWait;

void SOCLi_SetMyIP(void) {
    CPSMyIp                              = M2C_FIELD(SOCLiConfigPtr, s32 *, 4);
    CPSNetMask                           = M2C_FIELD(SOCLiConfigPtr, s32 *, 8);
    CPSGatewayIp                         = M2C_FIELD(SOCLiConfigPtr, s32 *, 0xC);
    M2C_FIELD(&CPSDnsIp, s32 *, 0)       = (s32) M2C_FIELD(SOCLiConfigPtr, s32 *, 0x10);
    M2C_FIELD(&CPSDnsIp, s32 *, 4)       = (s32) M2C_FIELD(SOCLiConfigPtr, s32 *, 0x14);
    M2C_FIELD(&SOCLiYieldWait, s32 *, 8) = (s32) (M2C_FIELD(&SOCLiYieldWait, s32 *, 8) | 2);
}
