#include "m2c.h"

s32 func_02013874();                                /* extern */
extern void *data_0210e644;

s32 func_02047728(s32 arg0) {
    s32 var_r0;

    if (arg0 == 0) {
        return -1;
    }
    M2C_FIELD(data_0210e644, s32 *, 0x1A90) = 2;
    var_r0 = func_02013874(arg0);
    if (var_r0 == 2) {
        var_r0 = 0;
    }
    return var_r0;
}
