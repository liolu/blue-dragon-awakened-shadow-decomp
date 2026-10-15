#include "m2c.h"

M2C_UNK OS_SendMessage(M2C_UNK *, s32, M2C_UNK);     /* extern */
extern M2C_UNK SOCLiCommandPacketQueue;

void SOCLi_FreeCommandPacket(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    OS_SendMessage(&SOCLiCommandPacketQueue, arg0, 0);
}
