#include "m2c.h"

extern M2C_UNK data_0210f230;
extern M2C_UNK data_0210f238;

M2C_UNK *bfloat(s32 arg0, s32 arg1) {
    M2C_FIELD(&data_0210f230, s32 *, 8)   = arg0;
    M2C_FIELD(&data_0210f230, s32 *, 0xC) = arg1;
    return &data_0210f238;
}
