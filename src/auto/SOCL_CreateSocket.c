#include "m2c.h"

s32 SOCLi_CreateCommandPacket(M2C_UNK *, s32, M2C_UNK);         /* extern */
M2C_UNK SOCLi_ExecCommandPacketInCtrlPipe(s32, s32);                    /* extern */
s32 SOCLi_StartupSocket();                                /* extern */
extern M2C_UNK SOCLi_CreateSocketCallBack;

s32 SOCL_CreateSocket(void) {
    s32 temp_r0;

    temp_r0 = SOCLi_StartupSocket();
    if (temp_r0 == 0) {
        return -0x31;
    }
    SOCLi_ExecCommandPacketInCtrlPipe(temp_r0, SOCLi_CreateCommandPacket(&SOCLi_CreateSocketCallBack, temp_r0, 1));
    return temp_r0;
}
