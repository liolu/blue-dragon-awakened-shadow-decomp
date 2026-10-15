#include "m2c.h"

M2C_UNK gti2BufferWriteData(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 gti2BeginReliableMessage(void *, M2C_UNK, s32, s32 *);     /* extern */
s32 gti2EndReliableMessage(void *);                          /* extern */

s32 gti2SendClientChallenge(void *arg0, M2C_UNK arg1) {
    s32 sp0;

    if (gti2BeginReliableMessage(arg0, 1, M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x44) + 0x27, &sp0) == 0) {
        return 0;
    }
    if (sp0 != 0) {
        return 1;
    }
    gti2BufferWriteData(arg0 + 0x50, arg1, 0x20);
    if (gti2EndReliableMessage(arg0) != 0) {
        return 1;
    }
    return 0;
}
