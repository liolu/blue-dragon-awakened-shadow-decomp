#include "m2c.h"

extern M2C_UNK data_0210e2d4;

s32 *AllocFunc_SOCL(s32 arg0) {
    s32 *var_r0;
    s32 temp_r4;

    temp_r4 = arg0 + 4;
    var_r0  = M2C_FIELD(&data_0210e2d4, s32 * (**) (M2C_UNK, s32), 0xC)(0, temp_r4);
    if (var_r0 != NULL) {
        *var_r0 = temp_r4;
        var_r0  = (s32 *) ((s8 *) var_r0 + 4);
    }
    return var_r0;
}
