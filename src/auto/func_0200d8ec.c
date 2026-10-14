#include "m2c.h"

s32 func_0200d3f8(M2C_UNK *, M2C_UNK, M2C_UNK);     /* extern */
s32 func_0200d888(M2C_UNK *);                       /* extern */

s32 func_0200d8ec(M2C_UNK arg0, M2C_UNK arg1) {
    u8 sp0[44];

    if ((func_0200d3f8(sp0, arg0, arg1) == 0) || (func_0200d888(sp0) == 0)) {
        return 0;
    }
    return 1;
}
