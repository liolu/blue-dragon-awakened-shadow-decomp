#include "m2c.h"

extern void *SOCLiConfigPtr;
extern M2C_UNK SOCLiCommandPackets;

s32 SOCLi_CleanupCommandPacketQueue(void) {
    if ((s32) M2C_FIELD(&SOCLiCommandPackets, s32 *, 0x20) < (s32) M2C_FIELD(&SOCLiCommandPackets, s32 *, 0x18)) {
        return -1;
    }
    M2C_FIELD(SOCLiConfigPtr, M2C_UNK(**)(s32), 0x1C)(M2C_FIELD(&SOCLiCommandPackets, s32 *, 0));
    M2C_FIELD(&SOCLiCommandPackets, s32 *, 0) = 0;
    return 0;
}
