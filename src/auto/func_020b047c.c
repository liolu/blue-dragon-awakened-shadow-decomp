#include "m2c.h"

void *func_020b0310(M2C_UNK *, s32);                /* extern */
M2C_UNK func_ov000_021ded54(s32, s32);              /* extern */
extern M2C_UNK data_02166810;
extern s32 data_ov000_021f6740;

void func_020b047c(void) {
    s32 var_r6;
    void *temp_r0;

    var_r6 = 0;
    do {
        temp_r0 = func_020b0310(&data_02166810, var_r6);
        if ((temp_r0 != NULL) && (data_ov000_021f6740 != 0)) {
            func_ov000_021ded54(data_ov000_021f6740, M2C_FIELD(temp_r0, s32 *, 0x10) + 0x318);
        }
        var_r6 += 1;
    } while (var_r6 < 0x10);
}
