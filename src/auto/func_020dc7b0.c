#include "m2c.h"

s32 func_0207d4a4(M2C_UNK);                         /* extern */
M2C_UNK func_020dc824();                            /* extern */
extern s32 data_021672b8;

void func_020dc7b0(void) {
    s32 temp_r0;

    if (data_021672b8 != 0) {
        return;
    }
    temp_r0 = func_0207d4a4(0x180);
    if (temp_r0 != 0) {
        func_020dc824();
    }
    data_021672b8 = temp_r0;
}
