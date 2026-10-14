#include "m2c.h"

M2C_UNK func_02099acc();                            /* extern */

void func_02099a7c(void *arg0, s32 arg1) {
    s32 var_r2;
    void *var_r3;

    func_02099acc();
    var_r2 = 0;
    var_r3 = arg0;
    do {
        M2C_FIELD(var_r3, s32 *, 4) = -1;
        var_r2 += 1;
        M2C_FIELD(var_r3, s8 *, 0x38) = 0;
        var_r3 += 0x38;
    } while (var_r2 < 2);
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s16 *, 0x74) = -1;
}
