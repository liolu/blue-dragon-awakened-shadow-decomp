#include "m2c.h"

extern void *data_020fbcdc;

void func_02071a5c(void *arg0, s32 arg1) {
    void *var_r0;

    var_r0 = arg0;
    if (var_r0 == NULL) {
        var_r0 = data_020fbcdc;
    }
    M2C_FIELD(var_r0, s32 *, 0xA8) = arg1;
}
