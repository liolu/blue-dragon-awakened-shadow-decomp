#include "m2c.h"

s32 func_020c3080(void *arg0) {
    s32 **temp_r0;
    s32 *var_r0;

    temp_r0 = M2C_FIELD(arg0, s32 ***, 0x20);
    if (temp_r0 != NULL) {
        var_r0 = *temp_r0;
    } else {
        var_r0 = NULL;
    }
    if (var_r0 != NULL) {
        return *var_r0;
    }
    return -1;
}
