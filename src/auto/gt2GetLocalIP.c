#include "m2c.h"

s32 gt2GetLocalIP(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}
