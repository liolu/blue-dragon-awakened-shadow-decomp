#include "m2c.h"

M2C_UNK func_02026e14(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_0207d4cc(s32);                         /* extern */
M2C_UNK func_ov000_02188970(s32);                   /* extern */
extern M2C_UNK func_020be0ec;

void func_020be0a0(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x18);
    if (temp_r4 == 0) {
        return;
    }
    if (temp_r4 != 0) {
        func_ov000_02188970(temp_r4);
        func_02026e14(temp_r4 + 4, 3, 0x2A8, &func_020be0ec);
        func_0207d4cc(temp_r4);
    }
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}
