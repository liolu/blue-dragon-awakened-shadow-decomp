#include "m2c.h"

extern M2C_UNK data_0210e708;

void func_0204cacc(void) {
    if (M2C_FIELD(&data_0210e708, s32 *, 0) != 9) {
        M2C_FIELD(&data_0210e708, s32 *, 0) = 0;
        M2C_FIELD(&data_0210e708, s32 *, 4) = 0;
    }
}
