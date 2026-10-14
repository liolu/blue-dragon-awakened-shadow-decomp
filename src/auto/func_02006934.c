#include "m2c.h"

extern M2C_UNK data_02101980;

s32 func_02006934(void) {
    return M2C_FIELD(&data_02101980, s32 *, 0x20) = (s32) (M2C_FIELD(&data_02101980, s32 *, 0x20) + 1);
}
