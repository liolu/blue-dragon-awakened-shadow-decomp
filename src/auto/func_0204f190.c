#include "m2c.h"

extern M2C_UNK data_0210e8c0;

s32 func_0204f190(void) {
    if (M2C_FIELD(&data_0210e8c0, void **, 4) != NULL) {
        return M2C_FIELD(M2C_FIELD(&data_0210e8c0, void **, 4), s32 *, 0x1C);
    }
    return 0;
}
