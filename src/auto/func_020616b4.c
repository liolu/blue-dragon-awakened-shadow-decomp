#include "m2c.h"

M2C_UNK func_020068c0(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_02061684(M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK data_020fad14;

void func_020616b4(M2C_UNK arg0, M2C_UNK arg1) {
    u8 sp0[16];

    func_020068c0(sp0, &data_020fad14);
    func_02061684(arg0, arg1, sp0);
}
