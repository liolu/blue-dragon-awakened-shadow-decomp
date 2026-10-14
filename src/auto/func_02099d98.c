#include "m2c.h"

M2C_UNK func_0207d4cc(s32);                         /* extern */
M2C_UNK func_02099d3c(s32);                         /* extern */
extern M2C_UNK data_02165820;

void func_02099d98(void) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(&data_02165820, s32 *, 4);
    if (temp_r4 == 0) {
        return;
    }
    if (temp_r4 != 0) {
        func_02099d3c(temp_r4);
        func_0207d4cc(temp_r4);
    }
    M2C_FIELD(&data_02165820, s32 *, 4) = 0;
}
