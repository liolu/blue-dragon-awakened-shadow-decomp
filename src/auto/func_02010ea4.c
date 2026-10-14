#include "m2c.h"

extern M2C_UNK data_02103ae0;

s32 func_02010ea4(void) {
    if (!(M2C_FIELD(&data_02103ae0, s32 *, 0x114) & 4)) {
        return 1;
    }
    return 0;
}
