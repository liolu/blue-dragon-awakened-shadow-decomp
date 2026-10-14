#include "m2c.h"

extern M2C_UNK data_02105a9c;

void func_02028e0c(s32 arg0, s32 arg1) {
    *((M2C_UNK *)((s8 *)&data_02105a9c + (arg0 * 4))) = arg1 | (arg0 << 0x1E);
}
