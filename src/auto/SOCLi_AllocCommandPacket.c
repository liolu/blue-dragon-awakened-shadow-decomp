#include "m2c.h"

s32 OS_ReceiveMessage(M2C_UNK *, s32 *, M2C_UNK);       /* extern */
extern M2C_UNK SOCLiCommandPacketQueue;

s32 SOCLi_AllocCommandPacket(M2C_UNK arg0) {
    s32 sp0;

    if (OS_ReceiveMessage(&SOCLiCommandPacketQueue, &sp0, arg0) != 0) {
        return sp0;
    }
    return 0;
}
