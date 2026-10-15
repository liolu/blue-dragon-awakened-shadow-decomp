#include "m2c.h"

s32 gti2CheckTimeout();                                /* extern */
s32 gti2SendRetries(M2C_UNK, M2C_UNK);                /* extern */
s32 gti2CheckPendingAck(M2C_UNK, M2C_UNK);                /* extern */
s32 gti2CheckKeepAlive(M2C_UNK, M2C_UNK);                /* extern */

s32 gti2ConnectionThink(M2C_UNK arg0, M2C_UNK arg1) {
    if (gti2CheckTimeout() == 0) {
        return 0;
    }
    if (gti2CheckKeepAlive(arg0, arg1) == 0) {
        return 0;
    }
    if (gti2SendRetries(arg0, arg1) == 0) {
        return 0;
    }
    if (gti2CheckPendingAck(arg0, arg1) != 0) {
        return 1;
    }
    return 0;
}
