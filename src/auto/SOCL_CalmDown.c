#include "m2c.h"

s32 CPS_CalmDown();                                /* extern */
s32 SOCL_IsClosed(s32);                             /* extern */
M2C_UNK SOCL_Close(s32);                         /* extern */
M2C_UNK SOCLi_TrashSocket();                            /* extern */
s32 SOCL_CloseAll();                                /* extern */
M2C_UNK WCM_SetRecvDCFCallback(M2C_UNK);                     /* extern */
extern s32 SOCLiUDPSendSocket;

s32 SOCL_CalmDown(void) {
    s32 var_r4;

    if (SOCLiUDPSendSocket != 0) {
        var_r4 = SOCL_CloseAll();
        if (var_r4 == 0) {
            SOCL_Close(SOCLiUDPSendSocket);
            if (SOCL_IsClosed(SOCLiUDPSendSocket) != 0) {
                SOCLiUDPSendSocket = 0;
            }
            var_r4 = -0x1A;
        }
        SOCLi_TrashSocket();
    } else if (CPS_CalmDown() == 0) {
        var_r4 = -0x1A;
    } else {
        WCM_SetRecvDCFCallback(0);
        var_r4 = 0;
    }
    return var_r4;
}
