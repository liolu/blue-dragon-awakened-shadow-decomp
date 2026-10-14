#include "m2c.h"

extern M2C_UNK data_0210e708;

s32 func_0204c9b0(s32 *arg0) {
    if (arg0 != NULL) {
        *arg0 = M2C_FIELD(&data_0210e708, s32 *, 4);
    }
    return M2C_FIELD(&data_0210e708, s32 *, 0);
}
