#include "m2c.h"

M2C_UNK gti2ClosedCallback(void *, M2C_UNK);             /* extern */
M2C_UNK gti2ConnectionClosed();                            /* extern */
M2C_UNK gti2SendClose();                            /* extern */
M2C_UNK gti2SendClosed(void *);                      /* extern */
M2C_UNK gti2FreeSocketConnection(void *);                      /* extern */

void gti2CloseConnection(void *arg0, s32 arg1) {
    if (arg1 != 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0xC) >= 7) {
            return;
        }
        gti2ConnectionClosed(arg0);
        gti2SendClosed(arg0);
        gti2ClosedCallback(arg0, 0);
        gti2FreeSocketConnection(arg0);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0xC) = 6;
    gti2SendClose(arg0);
}
