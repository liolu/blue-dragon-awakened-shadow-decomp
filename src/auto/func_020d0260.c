#include "m2c.h"

M2C_UNK func_0207d4cc(s32);                         /* extern */
M2C_UNK func_020d01d4(s32);                         /* extern */
extern s32 data_02167168;

void func_020d0260(void) {
    s32 temp_r4;

    temp_r4 = data_02167168;
    if (temp_r4 == 0) {
        return;
    }
    if (temp_r4 != 0) {
        func_020d01d4(temp_r4);
        func_0207d4cc(temp_r4);
    }
    data_02167168 = 0;
}
