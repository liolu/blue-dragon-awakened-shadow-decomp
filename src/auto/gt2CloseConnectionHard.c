#include "m2c.h"

M2C_UNK gti2CloseConnection(M2C_UNK, M2C_UNK);            /* extern */

void gt2CloseConnectionHard(M2C_UNK arg0) {
    gti2CloseConnection(arg0, 1);
}
