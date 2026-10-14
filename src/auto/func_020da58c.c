#include "m2c.h"

M2C_UNK func_02077f50(s32);                         /* extern */
M2C_UNK func_0207d4cc(s32);                         /* extern */
extern s32 data_021672ac;

void func_020da58c(void) {
    s32 temp_r4;

    temp_r4 = data_021672ac;
    if (temp_r4 == 0) {
        return;
    }
    if (temp_r4 != 0) {
        func_02077f50(temp_r4 + 0x118);
        func_0207d4cc(temp_r4);
    }
    data_021672ac = 0;
}
