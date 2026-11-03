#include "m2c.h"

s32 SOC_RecvFrom(void *, void *, void *, void *, u8 *);
M2C_UNK CheckRcode(s32, M2C_UNK);

void recvfrom(void *arg0, void *arg1, void *arg2, void *arg3, u8 *arg4, s32 *arg5) {
    s32 temp_r0;
    *arg4   = (u8) *arg5;
    temp_r0 = SOC_RecvFrom(arg0, arg1, arg2, arg3, arg4);
    *arg5   = (s32) *arg4;
    CheckRcode(temp_r0, -1);
}
