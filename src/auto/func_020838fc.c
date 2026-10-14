#include "m2c.h"

extern M2C_UNK data_02165748;

s32 func_020838fc(void) {
    if (M2C_FIELD(&data_02165748, u16 *, 0x2C) & 0x10) {
        return 1;
    }
    return 0;
}
