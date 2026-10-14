#include "m2c.h"

M2C_UNK func_0208305c(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK *data_02164ecc;

s32 func_02083020(M2C_UNK arg0) {
    M2C_UNK *var_r4;

    var_r4 = data_02164ecc;
    if (var_r4 != NULL) {
        do {
            func_0208305c(var_r4, arg0);
            var_r4 = *var_r4;
        } while (var_r4 != NULL);
    }
    return 0;
}
