#include "m2c.h"

extern M2C_UNK data_ov001_02196b60;

s32 func_ov001_02170ab8(void) {
    if (M2C_FIELD(&data_ov001_02196b60, s32 *, 0) != 0) {
        return 1;
    }
    return 0;
}
