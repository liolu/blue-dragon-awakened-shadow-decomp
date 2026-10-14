#include "m2c.h"

M2C_UNK func_ov000_0217585c(s32, s32, M2C_UNK);     /* extern */
extern s32 data_ov000_021ee0f8;

void func_020bd264(s32 *arg0, M2C_UNK arg1) {
    s32 temp_r1;

    temp_r1 = *arg0;
    if (temp_r1 == -1) {
        return;
    }
    func_ov000_0217585c(data_ov000_021ee0f8, temp_r1, arg1);
}
