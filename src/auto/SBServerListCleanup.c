#include "m2c.h"

M2C_UNK ArrayFree();                            /* extern */
M2C_UNK SBRefStrHashCleanup(void *);                      /* extern */
M2C_UNK SBServerListClear(void *);                      /* extern */
M2C_UNK SBServerListDisconnect();                            /* extern */

void SBServerListCleanup(void *arg0) {
    SBServerListDisconnect();
    SBServerListClear(arg0);
    SBRefStrHashCleanup(arg0);
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        ArrayFree();
    }
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
