#include "m2c.h"

M2C_UNK gti2SNDiff(u16, u16);                    /* extern */

void gti2IncomingBufferMessageCompare(void *arg0, void *arg1) {
    gti2SNDiff(M2C_FIELD(arg0, u16 *, 0xC), M2C_FIELD(arg1, u16 *, 0xC));
}
