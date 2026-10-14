#include "m2c.h"

s32 func_02099b68(void *arg0) {
    s32 var_r2;
    void *var_r0;

    var_r0 = arg0;
    var_r2 = 0;
loop_1:
    if (!(M2C_FIELD(var_r0, u8 *, 0x38) & 1)) {
        return var_r2;
    }
    var_r2 += 1;
    var_r0 += 0x38;
    if (var_r2 >= 2) {
        return -1;
    }
    goto loop_1;
}
