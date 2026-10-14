#include "m2c.h"

extern M2C_UNK data_0210e718;

s32 func_0204d334(void) {
    if ((M2C_FIELD(&data_0210e718, void **, 4) != NULL) && (M2C_FIELD(M2C_FIELD(&data_0210e718, void **, 4), u16 *, 4) == 6)) {
        return 1;
    }
    return 0;
}
