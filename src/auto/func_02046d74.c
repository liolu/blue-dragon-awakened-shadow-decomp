#include "m2c.h"

s32 memcmp(M2C_UNK, M2C_UNK *, M2C_UNK);     /* extern */
extern M2C_UNK data_020f9218;

s32 func_02046d74(M2C_UNK arg0) {
    if (memcmp(arg0, &data_020f9218, 8) == 0) {
        return 1;
    }
    return 0;
}
