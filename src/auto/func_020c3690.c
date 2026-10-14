#include "m2c.h"

M2C_UNK func_0207d4cc(s32);                         /* extern */
M2C_UNK func_020bcfd4(s32);                         /* extern */

void func_020c3690(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_r4 == 0) {
        return;
    }
    if (temp_r4 != 0) {
        func_020bcfd4(temp_r4);
        func_0207d4cc(temp_r4);
    }
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}
