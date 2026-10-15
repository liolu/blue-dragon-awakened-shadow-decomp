#include "m2c.h"

s32 SBServerGetNext(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x24);
}
