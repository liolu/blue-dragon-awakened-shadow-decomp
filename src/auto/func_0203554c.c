#include "m2c.h"

s32 func_020354e8();                                /* extern */
extern M2C_UNK data_0210ca1c;

s32 func_0203554c(s32 arg0) {
    s32 temp_r1;
    s32 var_r4;

    var_r4 = 0;
    if (func_020354e8() != 0) {
        temp_r1 = ~M2C_FIELD(&data_0210ca1c, s32 *, 0x1C);
        if (temp_r1 == (temp_r1 & arg0)) {
            var_r4 = 1;
        }
    }
    return var_r4;
}
