#include "m2c.h"

extern M2C_UNK data_0210e8cc;

s32 func_0204fbb8(void) {
    if ((M2C_FIELD(&data_0210e8cc, void **, 0xC) != NULL) &&
        ((u32) (u8) (M2C_FIELD(M2C_FIELD(&data_0210e8cc, void **, 0xC), u8 *, 0x1E) + 0xFF) <= 1U)) {
        return 0;
    }
    return 1;
}
