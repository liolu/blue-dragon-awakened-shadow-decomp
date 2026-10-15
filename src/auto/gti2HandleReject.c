#include "m2c.h"

s32 gti2ConnectedCallback(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK gti2ConnectionClosed();                            /* extern */
s32 gti2ConnectionCommunicationError();                                /* extern */
s32 gti2SendClosed(void *);                          /* extern */

s32 gti2HandleReject(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 var_r0;

    if (M2C_FIELD(arg0, s32 *, 0xC) != 1) {
        if (gti2ConnectionCommunicationError() != 0) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    gti2ConnectionClosed(arg0);
    if (gti2SendClosed(arg0) == 0) {
        return 0;
    }
    if (gti2ConnectedCallback(arg0, 2, arg1, arg2) != 0) {
        return 1;
    }
    return 0;
}
