#include "m2c.h"

extern M2C_UNK data_0210e8c0;

s32 func_0204fa58(void) {
    if ((M2C_FIELD(&data_0210e8c0, void **, 4) != NULL) && (M2C_FIELD(M2C_FIELD(&data_0210e8c0, void **, 4), s32 *, 4) == 5)) {
        return 1;
    }
    return 0;
}
