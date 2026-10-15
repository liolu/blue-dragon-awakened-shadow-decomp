#include "m2c.h"

s32 gti2SocketErrorCallback(void *);                          /* extern */
M2C_UNK gt2CloseAllConnectionsHard();                            /* extern */
M2C_UNK gti2CloseSocket(void *);                      /* extern */

void gti2SocketError(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x18) != 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x18) = 1;
    gt2CloseAllConnectionsHard(arg0);
    if (gti2SocketErrorCallback(arg0) == 0) {
        return;
    }
    gti2CloseSocket(arg0);
}
