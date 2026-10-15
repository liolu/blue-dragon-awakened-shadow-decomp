#include "m2c.h"

s32 gti2UShortFromBuffer(M2C_UNK, M2C_UNK);                /* extern */
s32 gti2ConnectionCommunicationError();                                /* extern */
s32 gti2HandleESN(M2C_UNK, s32);                    /* extern */

s32 gti2HandleAck(M2C_UNK arg0, M2C_UNK arg1, s32 arg2) {
    s32 var_r0;

    if (arg2 != 2) {
        if (gti2ConnectionCommunicationError() != 0) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    if (gti2HandleESN(arg0, gti2UShortFromBuffer(arg1, 0)) != 0) {
        return 1;
    }
    return 0;
}
