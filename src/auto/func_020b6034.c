#include "m2c.h"

extern M2C_UNK data_02100bf8;

void func_020b6034(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02100bf8;
    M2C_FIELD(arg0, s8 *, 0x18)    = 0;
    M2C_FIELD(arg0, s16 *, 4)      = -1;
    M2C_FIELD(arg0, s8 *, 0x18)    = 0;
    M2C_FIELD(arg0, s16 *, 0x12)   = 0;
}
