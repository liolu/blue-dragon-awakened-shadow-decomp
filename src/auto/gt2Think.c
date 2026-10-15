#include "m2c.h"

s32 gti2ReceiveMessages();                                /* extern */
s32 gti2SocketConnectionsThink(M2C_UNK);                         /* extern */
M2C_UNK gti2FreeClosedConnections(M2C_UNK);                     /* extern */

void gt2Think(M2C_UNK arg0) {
    if (gti2ReceiveMessages() == 0) {
        return;
    }
    if (gti2SocketConnectionsThink(arg0) == 0) {
        return;
    }
    gti2FreeClosedConnections(arg0);
}
