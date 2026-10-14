#include "m2c.h"

s32 func_02028350(void *arg0) {
    if (arg0 != NULL) {
        return M2C_FIELD(arg0, u16 *, 0xC) * 8;
    }
    return 0;
}
