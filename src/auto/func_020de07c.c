#include "m2c.h"

M2C_UNK func_ov000_021baa4c(s32, M2C_UNK, M2C_UNK, void *, s32); /* extern */
M2C_UNK func_ov000_021bae40();                      /* extern */

void func_020de07c(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0) == 0) {
        return;
    }
    func_ov000_021bae40();
    func_ov000_021baa4c(M2C_FIELD(arg0, s32 *, 0), 0, 0, arg0 + 0x58, 0);
    M2C_FIELD(arg0, s32 *, 0x1D8) = (s32) M2C_FIELD(arg0, s32 *, 0x90);
    M2C_FIELD(arg0, s32 *, 0x1DC) = 0x258;
}
