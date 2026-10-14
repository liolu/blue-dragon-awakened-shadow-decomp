#include "m2c.h"

extern M2C_UNK func_01ff8000;

s32 func_020440e4(void *arg0) {
    M2C_UNK *temp_r2;

    temp_r2 = M2C_FIELD(arg0, M2C_UNK **, 8);
    if (temp_r2 == NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 8) = &func_01ff8000;
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + 1);
        return 1;
    }
    if (temp_r2 != &func_01ff8000) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + 1);
    return 1;
}
