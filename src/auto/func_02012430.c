#include "m2c.h"

extern M2C_UNK data_02104360;

void func_02012430(s32 arg0, s32 arg1) {
    M2C_FIELD((M2C_FIELD(&data_02104360, s32 *, 4) + (arg0 * 4)), s32 *, 0x18) = arg1;
}
