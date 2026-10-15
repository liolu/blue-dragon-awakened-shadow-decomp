#include "m2c.h"

extern M2C_UNK data_02164ee4;

void func_0208c834(void *arg0) {
    void *var_r1;
    void *var_r2;

    var_r2 = M2C_FIELD(&data_02164ee4, void **, 4);
    if (var_r2 == arg0) {
        M2C_FIELD(&data_02164ee4, void **, 4) = (void *) M2C_FIELD(arg0, void **, 4);
    } else {
        var_r1 = M2C_FIELD(var_r2, void **, 4);
        if (var_r1 != NULL) {
        loop_3:
            if (var_r1 == arg0) {
                M2C_FIELD(var_r2, void **, 4) = (void *) M2C_FIELD(arg0, void **, 4);
            } else {
                var_r2 = var_r1;
                var_r1 = M2C_FIELD(var_r1, void **, 4);
                if (var_r1 != NULL) {
                    goto loop_3;
                }
            }
        }
    }
    M2C_FIELD(arg0, void **, 4)  = NULL;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}
