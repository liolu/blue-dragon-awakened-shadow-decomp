#include "m2c.h"

s32 inet_addr(M2C_UNK);                         /* extern */
M2C_UNK SBSendNatNegotiateCookieToServer(s32, s32, u16, M2C_UNK);      /* extern */

void ServerBrowserSendNatNegotiateCookieToServerA(s32 arg0, M2C_UNK arg1, s32 arg2, M2C_UNK arg3) {
    SBSendNatNegotiateCookieToServer(arg0 + 0x4C, inet_addr(arg1), (u16) ((u8) (arg2 >> 8) | ((arg2 << 8) & 0xFF00)), arg3);
}
