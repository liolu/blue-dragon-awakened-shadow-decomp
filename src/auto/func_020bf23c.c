#include "m2c.h"

s32 func_020c3558(s32);                             /* extern */
M2C_UNK func_ov000_02174014(s32, s32);              /* extern */
s32 func_ov000_021962fc(s32, s32, s32);             /* extern */

void func_020bf23c(void *arg0, void *arg1) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r5;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0xC);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x70);
    temp_r5 = M2C_FIELD(arg1, s32 *, 0xC);
    if ((temp_r0 != 0) && (func_ov000_021962fc(temp_r0, temp_r4, temp_r5) != 0)) {
        return;
    }
    temp_r4_2 = func_020c3558(temp_r4);
    func_ov000_02174014(temp_r4_2, func_020c3558(temp_r5));
}
