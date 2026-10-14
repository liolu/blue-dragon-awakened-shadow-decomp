#include "m2c.h"

extern M2C_UNK data_02110430;

s32 func_0207ddb0(void) {
    if (M2C_FIELD(&data_02110430, u8 *, 1) != 0) {
        return 1;
    }
    return 0;
}
