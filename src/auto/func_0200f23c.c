#include "m2c.h"

extern M2C_UNK data_021039ec;

s32 func_0200f23c(void) {
    if (M2C_FIELD(&data_021039ec, s32 *, 0x1C) != 0) {
        return 0;
    }
    M2C_FIELD(&data_021039ec, s32 *, 0x1C) = 1;
    return 1;
}
