#include "m2c.h"

s32 gpiSendGetInfo(M2C_UNK, s32, s32);               /* extern */
s32 gpiAddOperation(M2C_UNK, M2C_UNK, M2C_UNK, void **, s32, s32, s32); /* extern */

s32 gpiPeerGetSig(M2C_UNK arg0, void *arg1) {
    void *spC;
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = gpiAddOperation(arg0, 2, 0, &spC, 0, 0, 0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    var_r0 = gpiSendGetInfo(arg0, M2C_FIELD(arg1, s32 *, 0x10), M2C_FIELD(spC, s32 *, 0x18));
    if (var_r0 == 0) {
        M2C_FIELD(arg1, s32 *, 0) = 0x65;
        var_r0                    = 0;
    }
    return var_r0;
}
