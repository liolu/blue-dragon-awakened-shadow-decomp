#include "m2c.h"

s32 func_0207c624(M2C_UNK *);                       /* extern */
s32 func_0207c638(M2C_UNK *, M2C_UNK);              /* extern */
extern M2C_UNK data_02110134;

s32 func_020dce64(void) {
    if (func_0207c638(&data_02110134, 0) != 0) {
        return 1;
    }
    if (func_0207c624(&data_02110134) == 0x17) {
        return 1;
    }
    return 0;
}
