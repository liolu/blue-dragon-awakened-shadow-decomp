#include "m2c.h"

extern M2C_UNK data_0210f0a0;

s32 GOAGetLastError(void) {
    return M2C_FIELD(&data_0210f0a0, s32 *, 4);
}
