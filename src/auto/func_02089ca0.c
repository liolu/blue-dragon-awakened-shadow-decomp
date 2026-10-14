#include "m2c.h"

M2C_UNK func_ov000_021d9ac8(s32, s32, M2C_UNK);     /* extern */
extern s32 data_ov000_021f6270;

s32 func_02089ca0(void *arg0) {
    M2C_UNK var_r2;

    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        var_r2 = 1;
    } else {
        var_r2 = 0;
    }
    func_ov000_021d9ac8(data_ov000_021f6270, M2C_FIELD(arg0, s32 *, 0), var_r2);
    return 0;
}
