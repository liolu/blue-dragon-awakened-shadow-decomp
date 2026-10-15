#include "m2c.h"

M2C_UNK gti2CloseSocket(void *);                      /* extern */

s32 gti2SocketErrorCallback(void *arg0) {
    if (arg0 == NULL) {
        return 1;
    }
    if (M2C_FIELD(arg0, M2C_UNK(**)(), 0x24) == NULL) {
        return 1;
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + 1);
    M2C_FIELD(arg0, M2C_UNK(**)(), 0x24)(arg0);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) - 1);
    if ((M2C_FIELD(arg0, s32 *, 0x14) != 0) && (M2C_FIELD(arg0, s32 *, 0x1C) == 0)) {
        gti2CloseSocket(arg0);
        return 0;
    }
    return 1;
}
