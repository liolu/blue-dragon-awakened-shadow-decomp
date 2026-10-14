#include "m2c.h"

M2C_UNK func_0207d4cc(s32);                         /* extern */
M2C_UNK func_020d1d88(s32);                         /* extern */
extern M2C_UNK data_021671c4;

void func_020d1e0c(void) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(&data_021671c4, s32 *, 4);
    if (temp_r4 == 0) {
        return;
    }
    if (temp_r4 != 0) {
        func_020d1d88(temp_r4);
        func_0207d4cc(temp_r4);
    }
    M2C_FIELD(&data_021671c4, s32 *, 4) = 0;
}
