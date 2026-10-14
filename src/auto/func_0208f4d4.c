#include "m2c.h"

extern M2C_UNK data_02164ee4;

s32 func_0208f4d4(void) {
    if (M2C_FIELD(M2C_FIELD(&data_02164ee4, void **, 0x14), s32 *, 0x40) != 0) {
        return 1;
    }
    return 0;
}
