#include "m2c.h"

s32 func_02067e7c(void *arg0) {
    if ((arg0 != NULL) && (M2C_FIELD(arg0, s32 *, 0x10) == 0) && (M2C_FIELD(arg0, s32 *, 8) == 0) && (M2C_FIELD(arg0, s32 *, 0xC) == 0) && (M2C_FIELD(arg0, s32 *, 0x1C) == 0) && (M2C_FIELD(arg0, s32 *, 0x14) == 0)) {
        return 1;
    }
    return 0;
}
