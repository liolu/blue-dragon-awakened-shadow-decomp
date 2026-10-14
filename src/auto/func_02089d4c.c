#include "m2c.h"

extern M2C_UNK data_0216636c;

s16 func_02089d4c(s32 *arg0) {
    s16 var_r0;

    var_r0 = 0;
    if (*arg0 == 3) {
        var_r0 = M2C_FIELD(&data_0216636c, s16 *, 0xD0);
    }
    return var_r0;
}
