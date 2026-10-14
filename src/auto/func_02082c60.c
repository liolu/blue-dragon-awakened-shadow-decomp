#include "m2c.h"

s32 func_020829d4();                                /* extern */
s32 func_02082e4c(M2C_UNK *);                       /* extern */
s32 func_ov000_021c5568(s32);                       /* extern */
extern M2C_UNK data_02164ecc;

void func_02082c60(void) {
    M2C_UNK *var_r4;

    if (func_020829d4() != 0) {
        return;
    }
    if (M2C_FIELD(&data_02164ecc, M2C_UNK **, 0) == NULL) {
        return;
    }
    if (func_ov000_021c5568(M2C_FIELD(&data_02164ecc, s32 *, 4)) == 0) {
        M2C_FIELD(&data_02164ecc, s32 *, 4) = 0;
    }
    var_r4 = M2C_FIELD(&data_02164ecc, M2C_UNK **, 0);
    if (var_r4 == NULL) {
        return;
    }
loop_8:
    if (func_02082e4c(var_r4) != 0) {
        var_r4 = *var_r4;
        if (var_r4 != NULL) {
            goto loop_8;
        }
    }
}
