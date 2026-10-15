#include "m2c.h"

M2C_UNK func_ov000_0218b6e8(s32, M2C_UNK);          /* extern */

void func_020bfc9c(void *arg0, M2C_UNK arg1) {
    s32 temp_r0_2;
    s32 var_r4;
    void **temp_r0;

    var_r4 = 0;
    do {
        temp_r0   = M2C_FIELD(arg0, void ***, 0xC);
        temp_r0_2 = M2C_FIELD(*temp_r0, s32(**)(void **, s32), 0x50)(temp_r0, var_r4);
        if (temp_r0_2 != 0) {
            func_ov000_0218b6e8(temp_r0_2, arg1);
        }
        var_r4 += 1;
    } while (var_r4 < 3);
}
