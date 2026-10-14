#include "m2c.h"

s32 func_0205cf70(void *arg0, void *arg1) {
    if (M2C_FIELD(arg0, s32 *, 0) != M2C_FIELD(arg1, s32 *, 0)) {
        return 1;
    }
    if (M2C_FIELD(arg0, u16 *, 4) != M2C_FIELD(arg1, u16 *, 4)) {
        return 1;
    }
    return 0;
}
