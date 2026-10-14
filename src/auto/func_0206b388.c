#include "m2c.h"

extern M2C_UNK data_020fbb30;

s32 func_0206b388(void) {
    if (M2C_FIELD(&data_020fbb30, s32 *, 4) != -1) {
        return 1;
    }
    return 0;
}
