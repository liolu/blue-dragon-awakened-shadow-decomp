#include "m2c.h"

M2C_UNK closesocket(s32);                         /* extern */
M2C_UNK FIFOClear(void *);                      /* extern */

void SBEngineCleanup(void *arg0) {
    closesocket(M2C_FIELD(arg0, s32 *, 0x20));
    M2C_FIELD(arg0, s32 *, 0x20) = -1;
    FIFOClear(arg0 + 0x14);
    FIFOClear(arg0 + 8);
}
