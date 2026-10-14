#include "m2c.h"

M2C_UNK func_020ab810(s32);                         /* extern */
M2C_UNK func_020ab940(s32, s32);                    /* extern */

void func_020ceb1c(void *arg0, s32 arg1) {
    func_020ab810(M2C_FIELD(arg0, s32 *, 0xC));
    func_020ab940(M2C_FIELD(arg0, s32 *, 0xC), arg1);
    M2C_FIELD(arg0, s32 *, 0x10C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x130) = 7;
}
