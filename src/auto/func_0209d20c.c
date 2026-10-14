#include "m2c.h"

M2C_UNK func_ov000_0219eb58(s32, s32, M2C_UNK, M2C_UNK); /* extern */
extern s32 data_ov000_021ee5e8;

s32 func_0209d20c(void *arg0) {
    M2C_UNK var_r2;
    M2C_UNK var_r3;

    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        var_r2 = 1;
    } else {
        var_r2 = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        var_r3 = 1;
    } else {
        var_r3 = 0;
    }
    func_ov000_0219eb58(data_ov000_021ee5e8 + 0xAC, M2C_FIELD(arg0, s32 *, 0), var_r2, var_r3);
    return 1;
}
