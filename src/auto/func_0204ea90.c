#include "m2c.h"

M2C_UNK func_0204e6b0(M2C_UNK);                     /* extern */

void func_0204ea90(s32 arg0, void *arg1) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg1, s32 *, 4);
    if ((temp_r1 != 0x603) && (temp_r1 != 0x901) && (temp_r1 != 0xB01)) {
        func_0204e6b0(3);
    }
}
