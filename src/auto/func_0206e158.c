#include "m2c.h"

s32 func_0206d4e4(M2C_UNK, M2C_UNK);                /* extern */
s32 func_0206d5bc();                                /* extern */
s32 func_0206d5fc(M2C_UNK, s32);                    /* extern */

s32 func_0206e158(M2C_UNK arg0, M2C_UNK arg1, s32 arg2) {
    s32 var_r0;

    if (arg2 != 2) {
        if (func_0206d5bc() != 0) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    if (func_0206d5fc(arg0, func_0206d4e4(arg1, 0)) != 0) {
        return 1;
    }
    return 0;
}
