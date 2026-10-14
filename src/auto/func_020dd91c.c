#include "m2c.h"

extern M2C_UNK data_021672cc;

s32 func_020dd91c(void) {
    if (M2C_FIELD(&data_021672cc, s32 *, 4) != 0) {
        return 1;
    }
    return 0;
}
