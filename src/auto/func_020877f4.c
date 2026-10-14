#include "m2c.h"

s32 func_02097e10(void *, s32, M2C_UNK);            /* extern */
M2C_UNK func_ov000_021bb160();                      /* extern */
void *func_ov000_021c559c(M2C_UNK, M2C_UNK *);      /* extern */
extern M2C_UNK func_020877a4;

void *func_020877f4(void *arg0) {
    M2C_UNK var_r2;
    void *var_r4;

    var_r4 = func_ov000_021c559c(0xB0, &func_020877a4);
    if (var_r4 != NULL) {
        func_ov000_021bb160();
        M2C_FIELD(var_r4, s32 *, 0xA8) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        var_r2 = 1;
    } else {
        var_r2 = 0;
    }
    if (func_02097e10(var_r4, M2C_FIELD(arg0, s32 *, 0), var_r2) == 0) {
        var_r4 = NULL;
    }
    return var_r4;
}
