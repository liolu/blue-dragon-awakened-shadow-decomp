#include "m2c.h"

s32 gti2ConnectionError(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
s32 gti2SendClosed();                                /* extern */

s32 gti2ConnectionMemoryError(M2C_UNK arg0) {
    if (gti2SendClosed() == 0) {
        return 0;
    }
    return gti2ConnectionError(arg0, 1, 4);
}
