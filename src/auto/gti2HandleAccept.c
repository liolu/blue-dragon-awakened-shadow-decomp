#include "m2c.h"

s32 gti2ConnectedCallback(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 gti2ConnectionCommunicationError();                                /* extern */

s32 gti2HandleAccept(void *arg0) {
    s32 var_r0;

    if (M2C_FIELD(arg0, s32 *, 0xC) != 1) {
        if (gti2ConnectionCommunicationError() != 0) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    M2C_FIELD(arg0, s32 *, 0xC) = 5;
    if (gti2ConnectedCallback(arg0, 0, 0, 0) != 0) {
        return 1;
    }
    return 0;
}
