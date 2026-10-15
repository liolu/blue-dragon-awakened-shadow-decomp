#include "m2c.h"

s32 gti2GetBufferFreeSpace(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4) - M2C_FIELD(arg0, s32 *, 8);
}
