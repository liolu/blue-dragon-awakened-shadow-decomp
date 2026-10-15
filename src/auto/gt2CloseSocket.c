#include "m2c.h"

M2C_UNK gt2CloseAllConnectionsHard();                            /* extern */
M2C_UNK gti2CloseSocket(M2C_UNK);                     /* extern */

void gt2CloseSocket(M2C_UNK arg0) {
    gt2CloseAllConnectionsHard();
    gti2CloseSocket(arg0);
}
