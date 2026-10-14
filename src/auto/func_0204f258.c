#include "m2c.h"

extern M2C_UNK data_0210e8c0;

void func_0204f258(void) {
    if (M2C_FIELD(&data_0210e8c0, void **, 4) == NULL) {
        return;
    }
    M2C_FIELD(M2C_FIELD(&data_0210e8c0, void **, 4), s32 *, 4) = 0;
    M2C_FIELD(M2C_FIELD(&data_0210e8c0, void **, 4), s32 *, 0x30) = 0;
}
