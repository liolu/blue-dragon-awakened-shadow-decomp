#include "m2c.h"

s32 func_0205a1d0(M2C_UNK *, M2C_UNK);              /* extern */
s32 func_0205b2e0(M2C_UNK *);                       /* extern */

s32 func_0205b4bc(M2C_UNK arg0) {
    u8 sp0[20];

    if (func_0205b2e0(sp0) == 0) {
        return 0;
    }
    if (func_0205a1d0(sp0, arg0) != 0) {
        return 1;
    }
    return 0;
}
