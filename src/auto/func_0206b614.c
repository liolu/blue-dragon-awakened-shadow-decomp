#include "m2c.h"

M2C_UNK *func_0206b540();                           /* extern */
extern M2C_UNK data_020fbb9c;

M2C_UNK *func_0206b614(void) {
    M2C_UNK *var_r0;

    var_r0 = func_0206b540();
    if (var_r0 == NULL) {
        var_r0 = &data_020fbb9c;
    }
    return var_r0;
}
