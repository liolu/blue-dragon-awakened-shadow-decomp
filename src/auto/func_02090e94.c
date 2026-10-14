#include "m2c.h"

s32 func_02090e94(void *arg0) {
    if ((M2C_FIELD(arg0, u8 *, 4) != 0) && (M2C_FIELD(arg0, u8 *, 0x1C) != 0)) {
        return 0;
    }
    return 1;
}
