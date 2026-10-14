#include "m2c.h"

extern M2C_UNK data_0210f230;
extern M2C_UNK data_0210f234;

M2C_UNK *func_0206b1e8(s32 arg0) {
    M2C_FIELD(&data_0210f230, s32 *, 4) = arg0;
    return &data_0210f234;
}
