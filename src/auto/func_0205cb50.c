#include "m2c.h"

extern M2C_UNK data_0210f0a0;

void func_0205cb50(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    M2C_FIELD(&data_0210f0a0, M2C_UNK (**)(), 0xC)(arg0);
}
