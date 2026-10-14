#include "m2c.h"

s32 func_020aa2bc(void *arg0) {
    if ((M2C_FIELD(arg0, u8 *, 0x3D) != 0) && (M2C_FIELD(arg0, u8 *, 0x3E) != 0) && (M2C_FIELD(arg0, u8 *, 0x3F) != 0)) {
        return 1;
    }
    return 0;
}
