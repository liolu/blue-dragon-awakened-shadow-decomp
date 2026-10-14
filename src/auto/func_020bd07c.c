#include "m2c.h"

M2C_UNK func_ov000_02175300(s32, s32);              /* extern */
M2C_UNK func_ov000_02175320(s32, s32);              /* extern */
extern s32 data_ov000_021ee0f8;

void func_020bd07c(s32 *arg0, s32 arg1) {
    s32 temp_r2;

    temp_r2 = *arg0;
    if (temp_r2 == -1) {
        return;
    }
    if (arg1 != 0) {
        func_ov000_02175320(data_ov000_021ee0f8, temp_r2);
        return;
    }
    func_ov000_02175300(data_ov000_021ee0f8, temp_r2);
}
