#include "m2c.h"

M2C_UNK func_0207d4cc(s32);                         /* extern */
M2C_UNK func_ov000_021ba82c(s32);                   /* extern */

void func_020d31a8(s32 *arg0) {
    s32 temp_r4;

    temp_r4 = *arg0;
    if (temp_r4 != 0) {
        func_ov000_021ba82c(temp_r4);
        func_0207d4cc(temp_r4);
    }
    *arg0 = 0;
}
