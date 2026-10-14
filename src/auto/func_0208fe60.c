#include "m2c.h"

void func_0208fe60(void *arg0, s32 arg1) {
    if ((M2C_FIELD(arg0, u8 *, 0x1F8) != 0) && (M2C_FIELD(arg0, s32 *, 0) == arg1)) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, u8 *, 0x1F8) = 0U;
}
