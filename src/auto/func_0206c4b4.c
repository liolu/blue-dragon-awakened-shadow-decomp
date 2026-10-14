#include "m2c.h"

M2C_UNK func_02017b54(s32, s32, s32);               /* extern */

void func_0206c4b4(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;
    s32 var_r1;

    var_r1 = arg1;
    if (var_r1 == -1) {
        var_r1 = M2C_FIELD(arg0, s32 *, 8) - arg2;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0) + var_r1;
    func_02017b54(temp_r0, temp_r0 + arg2, (M2C_FIELD(arg0, s32 *, 8) - var_r1) - arg2);
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) - arg2);
}
