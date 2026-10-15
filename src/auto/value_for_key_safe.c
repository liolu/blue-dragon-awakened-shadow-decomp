#include "m2c.h"

M2C_UNK *value_for_key();                           /* extern */
extern M2C_UNK data_020fbb9c;

M2C_UNK *value_for_key_safe(void) {
    M2C_UNK *var_r0;

    var_r0 = value_for_key();
    if (var_r0 == NULL) {
        var_r0 = &data_020fbb9c;
    }
    return var_r0;
}
