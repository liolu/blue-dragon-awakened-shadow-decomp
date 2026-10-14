#include "m2c.h"

extern void *data_02165948;

s32 func_020a9ed8(s32 arg0) {
    s32 var_r0;

    if ((data_02165948 == NULL) || (arg0 < 0) || (arg0 >= 3)) {
        return 0;
    }
    var_r0 = 1;
    if (!(M2C_FIELD(data_02165948, u8 *, 0x3F0C) & (1 << (u8) arg0))) {
        var_r0 = 0;
    }
    return var_r0;
}
