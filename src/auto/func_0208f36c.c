#include "m2c.h"

M2C_UNK func_0208b224(s32);                         /* extern */
M2C_UNK func_0208b268(s32, M2C_UNK, M2C_UNK);       /* extern */
extern M2C_UNK data_02164ee4;
extern M2C_UNK data_02165748;

s32 func_0208f36c(void *arg0) {
    M2C_UNK var_r1;
    M2C_UNK var_r2_2;
    s32 var_r2;

    if (M2C_FIELD(&data_02165748, s32 *, 0x30) != 0) {
        var_r2 = 1;
    } else {
        var_r2 = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        if (var_r2 == 0) {
            var_r1 = 1;
        } else {
            var_r1 = 0;
        }
        if (M2C_FIELD(arg0, s32 *, 4) != 0) {
            var_r2_2 = 1;
        } else {
            var_r2_2 = 0;
        }
        func_0208b268(M2C_FIELD(&data_02164ee4, s32 *, 0x14), var_r1, var_r2_2);
    } else {
        func_0208b224(M2C_FIELD(&data_02164ee4, s32 *, 0x14));
    }
    return 0;
}
