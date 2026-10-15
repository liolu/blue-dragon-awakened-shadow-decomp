#include "m2c.h"

M2C_UNK gti2BufferWriteData(s32, M2C_UNK, s32);           /* extern */
s32 gti2BeginReliableMessage(s32, M2C_UNK, s32, s32 *);        /* extern */
s32 gti2EndReliableMessage(s32);                             /* extern */

s32 gti2SendAppReliable(s32 arg0, M2C_UNK arg1, s32 arg2) {
    s32 sp0;

    if (gti2BeginReliableMessage(arg0, 0, arg2 + 7, &sp0) == 0) {
        return 0;
    }
    if (sp0 != 0) {
        return 1;
    }
    gti2BufferWriteData(arg0 + 0x50, arg1, arg2);
    if (gti2EndReliableMessage(arg0) != 0) {
        return 1;
    }
    return 0;
}
