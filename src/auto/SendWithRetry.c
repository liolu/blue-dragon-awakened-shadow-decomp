#include "m2c.h"

s32 send(s32, M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */
M2C_UNK ErrorDisconnect(void *);                      /* extern */
s32 SBServerListConnectAndQuery(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK SBServerListDisconnect(void *);                      /* extern */

s32 SendWithRetry(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 var_r7;

    var_r7 = 1;
loop_1:
    var_r7 -= 1;
    temp_r0_2 = send(M2C_FIELD(arg0, s32 *, 0x6B4), arg1, arg2, 0);
    if ((temp_r0_2 <= 0) && (var_r7 >= 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x80) <= 0)) {
        SBServerListDisconnect(arg0);
        temp_r0 = SBServerListConnectAndQuery(arg0, 0, 0, 2, 0);
        if (temp_r0 != 0) {
            ErrorDisconnect(arg0);
            return temp_r0;
        }
        if (var_r7 < 0) {
            goto block_7;
        }
        goto loop_1;
    }
block_7:
    if (temp_r0_2 <= 0) {
        return 3;
    }
    return 0;
}
