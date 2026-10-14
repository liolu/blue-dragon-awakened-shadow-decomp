#include "m2c.h"

s32 func_020bec48(s32);                             /* extern */
s32 func_020bec54(s32);                             /* extern */
M2C_UNK func_020c7514(void *, M2C_UNK);             /* extern */

void func_020c9f24(void *arg0) {
    s32 temp_r0;
    s32 temp_r4;

    if (M2C_FIELD(arg0, s32 *, 0x130) != 8) {
        return;
    }
    temp_r4 = func_020bec48(M2C_FIELD(arg0, s32 *, 8));
    temp_r0 = func_020bec54(M2C_FIELD(arg0, s32 *, 8));
    if ((temp_r4 != 0xA) && (temp_r0 != 0xA)) {
        func_020c7514(arg0, 0x12C);
    }
}
