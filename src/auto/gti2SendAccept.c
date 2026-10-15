#include "m2c.h"

s32 gti2BeginReliableMessage(void *, M2C_UNK, s32, s32 *);     /* extern */
s32 gti2EndReliableMessage(void *);                          /* extern */

s32 gti2SendAccept(void *arg0) {
    s32 sp0;

    if (gti2BeginReliableMessage(arg0, 4, M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x44) + 7, &sp0) == 0) {
        return 0;
    }
    if (sp0 != 0) {
        return 1;
    }
    if (gti2EndReliableMessage(arg0) != 0) {
        return 1;
    }
    return 0;
}
