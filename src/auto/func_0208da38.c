#include "m2c.h"

void func_0208da38(void *arg0, s8 arg1) {
    s32 var_r2;

    M2C_FIELD(arg0, s8 *, 0x7AA) = arg1;
    var_r2                       = 0x12 - M2C_FIELD(arg0, s16 *, 0x4AE);
    if (var_r2 < 0) {
        var_r2 = 0;
    }
    if ((arg1 != 0) && (M2C_FIELD(arg0, s32 *, 0x4A4) == 0)) {
        M2C_FIELD(arg0, s8 *, 0x49E) = (s8) var_r2;
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x49E) = 0;
}
