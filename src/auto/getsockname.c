#include "m2c.h"

s32 SOC_GetSockName();                                /* extern */
M2C_UNK CheckRcode(s32, M2C_UNK);                /* extern */

void getsockname(s32 arg0, u8 *arg1, s32 *arg2) {
    s32 temp_r0;

    *arg1   = (u8) *arg2;
    temp_r0 = SOC_GetSockName(arg0);
    *arg2   = (s32) *arg1;
    CheckRcode(temp_r0, -1);
}
