#include "m2c.h"

s32 func_02028364(void *arg0) {
    if (arg0 != NULL) {
        return M2C_FIELD(arg0, u16 *, 0x1C) * 8;
    }
    return 0;
}
