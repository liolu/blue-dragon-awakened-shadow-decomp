#include "m2c.h"

M2C_UNK func_ov000_021c5298(s32, s32, M2C_UNK);     /* extern */
s32 func_ov000_021c540c(s32, s32);                  /* extern */

void func_020da3c0(s32 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0 = *arg0;
    if (temp_r0 == 0) {
        return;
    }
    temp_r0_2 = func_ov000_021c540c(temp_r0, 0x7530);
    if (temp_r0_2 == 0) {
        return;
    }
    func_ov000_021c5298(*arg0, temp_r0_2, 0);
}
