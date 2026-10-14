#include "m2c.h"

extern M2C_UNK data_0210e648;

void func_02047c48(void) {
    if (M2C_FIELD(&data_0210e648, s32 *, 8) == 4) {
        M2C_FIELD(&data_0210e648, s32 *, 8) = 5;
    }
}
