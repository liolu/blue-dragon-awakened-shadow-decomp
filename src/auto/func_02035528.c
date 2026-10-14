#include "m2c.h"

s32 func_020354e8();                                /* extern */
extern M2C_UNK data_0210ca1c;

s32 func_02035528(s32 arg0) {
    s32 var_r4;

    var_r4 = arg0;
    if (func_020354e8() == 0) {
        var_r4 = M2C_FIELD(&data_0210ca1c, s32 *, 0x2C);
    }
    return var_r4;
}
