#include "m2c.h"

s32 func_0207c624(M2C_UNK *);                       /* extern */
s32 func_0208a180();                                /* extern */
extern M2C_UNK data_02110134;
extern u8 data_021671c0;

s32 func_02082e08(void) {
    s32 var_r4;

    var_r4 = 0;
    if ((func_0208a180() != 0) && (data_021671c0 == 0) && (func_0207c624(&data_02110134) != 7)) {
        var_r4 = 1;
    }
    return var_r4;
}
