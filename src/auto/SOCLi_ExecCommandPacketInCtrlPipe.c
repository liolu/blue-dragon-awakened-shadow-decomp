#include "m2c.h"

s32 SOCLi_GetCtrlPipe();                                /* extern */
M2C_UNK SOCLi_ExecCommandPacket(s32, M2C_UNK);                /* extern */

void SOCLi_ExecCommandPacketInCtrlPipe(s32 arg0, M2C_UNK arg1) {
    SOCLi_ExecCommandPacket(SOCLi_GetCtrlPipe(), arg1);
}
