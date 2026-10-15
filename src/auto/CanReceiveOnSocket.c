#include "m2c.h"

s32 GSISocketSelect(M2C_UNK, s32 *, M2C_UNK, M2C_UNK); /* extern */

s32 CanReceiveOnSocket(M2C_UNK arg0) {
    s32 sp0;

    sp0 = 0;
    if (GSISocketSelect(arg0, &sp0, 0, 0) == 1) {
        return sp0;
    }
    return 0;
}
