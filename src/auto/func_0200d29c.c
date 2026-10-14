#include "m2c.h"

M2C_UNK func_02007a2c(s32, s32);                    /* extern */
M2C_UNK func_02007aa0(s32, s32);                    /* extern */
M2C_UNK func_02009978(s32, M2C_UNK, s32);           /* extern */

void func_0200d29c(void *arg0) {
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;

    temp_r4 = M2C_FIELD(arg0, s32 *, 4);
    temp_r5 = M2C_FIELD(arg0, s32 *, 8);
    temp_r6 = temp_r5 + M2C_FIELD(arg0, s32 *, 0xC);
    func_02007aa0(temp_r4, temp_r6);
    func_02007a2c(temp_r4, temp_r6);
    func_02009978(temp_r4 + temp_r5, 0, temp_r6 - temp_r5);
}
