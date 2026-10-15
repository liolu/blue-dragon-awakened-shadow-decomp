#include "m2c.h"

M2C_UNK ArrayFree(s32);                         /* extern */
M2C_UNK TableFree(s32);                         /* extern */
M2C_UNK closesocket(s32);                         /* extern */
M2C_UNK SocketShutDown();                            /* extern */
M2C_UNK gsifree(void *);                      /* extern */

void gti2CloseSocket(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
        M2C_FIELD(arg0, s32 *, 0x14) = 1;
        return;
    }
    closesocket(M2C_FIELD(arg0, s32 *, 0));
    TableFree(M2C_FIELD(arg0, s32 *, 0xC));
    ArrayFree(M2C_FIELD(arg0, s32 *, 0x10));
    gsifree(arg0);
    SocketShutDown();
}
