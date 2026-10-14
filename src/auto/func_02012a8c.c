#include "m2c.h"

s32 func_020125cc();                                /* extern */
extern M2C_UNK data_02104360;

s32 func_02012a8c(void) {
    if (func_020125cc() != 0) {
        return 0;
    }
    return M2C_FIELD(M2C_FIELD(&data_02104360, void **, 4), s32 *, 4);
}
