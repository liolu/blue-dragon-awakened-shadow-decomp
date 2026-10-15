#include "m2c.h"

s32 gti2DumpCallback(void *, s32, M2C_UNK, M2C_UNK, s32, s32, s32, s32); /* extern */
s32 gti2ConnectionError(s32, M2C_UNK, M2C_UNK);           /* extern */
s32 gti2SocketFindConnection();                                /* extern */

s32 gti2HandleHostUnreachable(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    s32 temp_r4;

    temp_r4 = gti2SocketFindConnection();
    if ((M2C_FIELD(arg0, s32 *, 0x2C) != 0) && (gti2DumpCallback(arg0, temp_r4, arg1, arg2, 1, 0, 0, arg3) == 0)) {
        return 0;
    }
    if (temp_r4 == 0) {
        return 1;
    }
    if (gti2ConnectionError(temp_r4, 6, 1) != 0) {
        return 1;
    }
    return 0;
}
