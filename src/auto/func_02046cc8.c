#include "m2c.h"

s32 memcmp(M2C_UNK *, M2C_UNK *, M2C_UNK);   /* extern */
M2C_UNK func_02046da8(M2C_UNK, M2C_UNK *);          /* extern */
extern M2C_UNK data_020f920c;

s32 func_02046cc8(M2C_UNK arg0) {
    u8 sp0[24];

    func_02046da8(arg0, sp0);
    if (memcmp(sp0, &data_020f920c, 8) == 0) {
        return 1;
    }
    return 0;
}
