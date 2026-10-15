#include "m2c.h"

M2C_UNK MI_CpuCopy8(M2C_UNK *, s32, M2C_UNK);     /* extern */
s32 WCM_SendDCFDataEx(s32, s32, s32, M2C_UNK, s32);     /* extern */
extern M2C_UNK data_020f8ee8;
extern s8 wfailed;

void send_packet(s32 arg0, s32 arg1, M2C_UNK arg2, s32 arg3) {
    s8 var_r1;

    MI_CpuCopy8(&data_020f8ee8, arg0 + 6, 6);
    if (WCM_SendDCFDataEx(arg0, arg0 + 6, arg1 - 6, arg2, arg3) < 0) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    wfailed = var_r1;
}
