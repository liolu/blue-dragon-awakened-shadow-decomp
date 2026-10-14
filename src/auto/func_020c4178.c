#include "m2c.h"

M2C_UNK func_ov000_021d49dc(s32);                   /* extern */

void func_020c4178(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r0 == 0) {
        return;
    }
    func_ov000_021d49dc(temp_r0 + 0x34);
}
