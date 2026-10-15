#include "m2c.h"

M2C_UNK gti2SendAppReliable();                            /* extern */
M2C_UNK gti2SendAppUnreliable();                            /* extern */

void gti2Send(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg3 != 0) {
        gti2SendAppReliable();
        return;
    }
    gti2SendAppUnreliable();
}
