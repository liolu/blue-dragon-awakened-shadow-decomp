#include "m2c.h"

extern M2C_UNK data_02167224;

void func_020d3148(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4)           = 0;
    M2C_FIELD(arg0, s32 *, 8)           = 0;
    M2C_FIELD(arg0, s32 *, 0xC)         = 0;
    M2C_FIELD(arg0, s32 *, 0)           = 0;
    M2C_FIELD(&data_02167224, s32 *, 4) = 0;
    if (M2C_FIELD(&data_02167224, void **, 0) == NULL) {
        M2C_FIELD(&data_02167224, void **, 0) = arg0;
    }
}
