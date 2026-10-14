#include "m2c.h"

M2C_UNK func_0208c790();                            /* extern */

void func_0208c730(void *arg0, void *arg1) {
    void *temp_r0;
    void *var_r0;
    void *var_r1;

    if (arg1 == NULL) {
        return;
    }
    temp_r0 = M2C_FIELD(arg1, void **, 8);
    if (temp_r0 != NULL) {
        if (temp_r0 == arg0) {
            return;
        }
        func_0208c790();
        goto block_6;
    }
block_6:
    var_r0 = M2C_FIELD(arg0, void **, 0xC);
    if (var_r0 == NULL) {
        M2C_FIELD(arg0, void **, 0xC) = arg1;
    } else {
        var_r1 = M2C_FIELD(var_r0, void **, 0x10);
        if (var_r1 != NULL) {
            do {
                var_r0 = var_r1;
                var_r1 = M2C_FIELD(var_r1, void **, 0x10);
            } while (var_r1 != NULL);
        }
        M2C_FIELD(var_r0, void **, 0x10) = arg1;
    }
    M2C_FIELD(arg1, void **, 8) = arg0;
}
