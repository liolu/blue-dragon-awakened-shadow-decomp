#include "m2c.h"

M2C_UNK gti2ConnectionError(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */

void gti2ConnectionCommunicationError(M2C_UNK arg0) {
    gti2ConnectionError(arg0, 7, 2);
}
