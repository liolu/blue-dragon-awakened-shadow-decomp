#include "m2c.h"

M2C_UNK func_0207d4cc(s32);                         /* extern */
M2C_UNK func_020dc930(s32);                         /* extern */
extern s32 data_021672b8;

void func_020dc7e8(void) {
    s32 temp_r4;

    temp_r4 = data_021672b8;
    if (temp_r4 == 0) {
        return;
    }
    if (temp_r4 != 0) {
        func_020dc930(temp_r4);
        func_0207d4cc(temp_r4);
    }
    data_021672b8 = 0;
}
