#include "m2c.h"

extern M2C_UNK data_0210e8cc;

void func_0205059c(void) {
    if (M2C_FIELD(&data_0210e8cc, void **, 0xC) == NULL) {
        return;
    }
    M2C_FIELD(M2C_FIELD(&data_0210e8cc, void **, 0xC), s32 *, 0) = 0;
    M2C_FIELD(M2C_FIELD(&data_0210e8cc, void **, 0xC), s8 *, 0x1E) = 0;
    M2C_FIELD(M2C_FIELD(&data_0210e8cc, void **, 0xC), s8 *, 0x1F) = 0;
}
