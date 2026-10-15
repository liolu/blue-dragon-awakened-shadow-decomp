#include "m2c.h"

M2C_UNK func_020068c0(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK SBServerAddKeyValue(M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK data_020fd0f4;

void SBServerAddIntKeyValue(M2C_UNK arg0, M2C_UNK arg1) {
    u8 sp0[20];

    func_020068c0(sp0, &data_020fd0f4);
    SBServerAddKeyValue(arg0, arg1, sp0);
}
