#include "m2c.h"

M2C_UNK func_0207c358(void *, s32, M2C_UNK, M2C_UNK); /* extern */

void func_0207c42c(void *arg0, s32 arg1) {
    if (arg1 == 0) {
        return;
    }
    if (arg1 == M2C_FIELD(arg0, s32 *, 0x38)) {
        func_0207c358(arg0, 0, 1, 0);
        return;
    }
    if (arg1 != M2C_FIELD(arg0, s32 *, 0x3C)) {
        return;
    }
    func_0207c358(arg0, M2C_FIELD(arg0, s32 *, 0x40), 1, 0);
}
