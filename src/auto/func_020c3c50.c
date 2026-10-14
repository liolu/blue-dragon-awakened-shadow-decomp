#include "m2c.h"

M2C_UNK func_0207d4cc(s32);                         /* extern */
M2C_UNK func_ov000_0219b490(s32);                   /* extern */

void func_020c3c50(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x24);
    if (temp_r4 == 0) {
        return;
    }
    if (temp_r4 != 0) {
        func_ov000_0219b490(temp_r4);
        func_0207d4cc(temp_r4);
    }
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
}
