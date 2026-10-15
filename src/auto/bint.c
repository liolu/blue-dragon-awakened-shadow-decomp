#include "m2c.h"

extern M2C_UNK data_0210f230;
extern M2C_UNK data_0210f234;

M2C_UNK *bint(s32 arg0) {
    M2C_FIELD(&data_0210f230, s32 *, 4) = arg0;
    return &data_0210f234;
}
