#include "m2c.h"

s32 gt2GetOutgoingBufferFreeSpace(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x54) - M2C_FIELD(arg0, s32 *, 0x58);
}
