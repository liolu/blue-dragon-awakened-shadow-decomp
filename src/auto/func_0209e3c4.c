#include "m2c.h"

M2C_UNK func_ov000_021d5844(void *, s32, s32, M2C_UNK); /* extern */

void func_0209e3c4(void *arg0, s32 arg1, M2C_UNK arg2) {
    func_ov000_021d5844(arg0, M2C_FIELD(arg0, s32 *, 0x10), arg1, arg2);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) + arg1);
}
