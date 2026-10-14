#include "m2c.h"

M2C_UNK func_0200cb40(M2C_UNK *);                   /* extern */
s32 func_0200cb68(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

s32 func_0200cd28(M2C_UNK arg0, M2C_UNK arg1) {
    u8 sp0[72];

    func_0200cb40(sp0);
    if (func_0200cb68(sp0, arg1, arg0, 0) != 0) {
        return 1;
    }
    return 0;
}
