#include "m2c.h"

extern M2C_UNK data_02164ee4;

void func_0208c7ec(void *arg0) {
    void *var_r1;
    void *var_r2;

    var_r2 = M2C_FIELD(&data_02164ee4, void **, 4);
    if (var_r2 != NULL) {
        var_r1 = M2C_FIELD(var_r2, void **, 4);
        if (var_r1 != NULL) {
            do {
                var_r2 = var_r1;
                var_r1 = M2C_FIELD(var_r1, void **, 4);
            } while (var_r1 != NULL);
        }
        M2C_FIELD(var_r2, void **, 4) = arg0;
    } else {
        M2C_FIELD(&data_02164ee4, void **, 4) = arg0;
    }
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
