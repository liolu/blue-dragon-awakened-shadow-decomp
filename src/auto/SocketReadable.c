#include "m2c.h"

M2C_UNK CanReceiveOnSocket();                            /* extern */

void SocketReadable(void) {
    CanReceiveOnSocket();
}
