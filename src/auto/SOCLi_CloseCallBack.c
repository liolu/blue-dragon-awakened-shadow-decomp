#include "m2c.h"

M2C_UNK OS_JoinThread(s32);                         /* extern */
s32 OS_DisableInterrupts();                                /* extern */
M2C_UNK OS_RestoreInterrupts(s32);                         /* extern */
M2C_UNK CPS_SocUnRegister();                            /* extern */
M2C_UNK CPS_SocRelease();                            /* extern */
M2C_UNK CPS_TcpShutdown();                            /* extern */
M2C_UNK CPS_TcpClose();                            /* extern */
M2C_UNK SOCLi_SendCommandPacket(s32, M2C_UNK);                /* extern */
M2C_UNK SOCLi_SocketRegisterTrash(void *);                      /* extern */
M2C_UNK SOCLi_SocketUnregister(void *);                      /* extern */

s32 SOCLi_CloseCallBack(void *arg0) {
    s32 temp_r5;
    s32 var_r0;
    s32 var_r1;
    s8 temp_r0;
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 4);
    var_r1  = 1;
    temp_r0 = M2C_FIELD(temp_r4, s8 *, 0x73);
    if ((temp_r0 != 0) && (temp_r0 != 4)) {
        var_r1 = 0;
    }
    if (var_r1 != 0) {
        OS_JoinThread(M2C_FIELD(temp_r4, s32 *, 0x68) + 0x20);
        CPS_TcpShutdown();
        CPS_TcpClose();
        CPS_SocRelease();
    }
    CPS_SocUnRegister();
    M2C_FIELD(temp_r4, s16 *, 0x70) = (s16) (M2C_FIELD(temp_r4, s16 *, 0x70) & ~6);
    if (M2C_FIELD(temp_r4, s8 *, 0x73) == 2) {
        var_r0 = M2C_FIELD(temp_r4, s32 *, 0x68);
    } else {
        var_r0 = M2C_FIELD(temp_r4, s32 *, 0x64);
    }
    SOCLi_SendCommandPacket(var_r0, 0);
    temp_r5 = OS_DisableInterrupts();
    SOCLi_SocketUnregister(temp_r4);
    SOCLi_SocketRegisterTrash(temp_r4);
    OS_RestoreInterrupts(temp_r5);
    M2C_FIELD(temp_r4, s16 *, 0x70) = (s16) (M2C_FIELD(temp_r4, s16 *, 0x70) | 0x20);
    return 0;
}
