#include "m2c.h"

M2C_UNK func_ov000_02171584(s32, s8, s32);          /* extern */

void func_020dd4a4(void *arg0) {
    s32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r3 == 0) {
        return;
    }
    func_ov000_02171584(temp_r3 + 0x74, M2C_FIELD(arg0, s8 *, 0xC9), M2C_FIELD(arg0, s32 *, 0xC4));
}
