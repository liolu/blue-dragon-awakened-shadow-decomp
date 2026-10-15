#include "m2c.h"

M2C_UNK OS_Sleep(M2C_UNK);                     /* extern */
s32 OS_GetProcMode();                                /* extern */
extern s32 CPSMyIp;
extern s32 SOCLiRequestedIP;
extern s32 SOCLiDhcpState;

s32 SOCL_GetHostID(void) {
    if (CPSMyIp == 0) {
        if (((SOCLiDhcpState & 3) == 1) && (OS_GetProcMode() != 0x12)) {
            OS_Sleep(0xA);
        }
    } else if (SOCLiRequestedIP == 0) {
        SOCLiRequestedIP = CPSMyIp;
    }
    return CPSMyIp;
}
