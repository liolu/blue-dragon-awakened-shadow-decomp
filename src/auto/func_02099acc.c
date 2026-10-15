#include "m2c.h"

M2C_UNK func_02099b0c(void *, s32);                 /* extern */

void func_02099acc(void *arg0) {
    s32 var_r4;
    void *var_r5;

    var_r5 = arg0;
    var_r4 = 0;
    do {
        func_02099b0c(arg0, M2C_FIELD(var_r5, s32 *, 4));
        var_r4 += 1;
        var_r5 += 0x38;
    } while (var_r4 < 2);
    M2C_FIELD(arg0, s32 *, 0)    = 0;
    M2C_FIELD(arg0, s16 *, 0x74) = -1;
}
