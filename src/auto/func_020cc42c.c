#include "m2c.h"

M2C_UNK func_020ceb1c(void *, s32);                 /* extern */

void func_020cc42c(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s8 *, 0x149) > 0) {
        return;
    }
    if (M2C_FIELD(arg0, s16 *, 0x100) != 0) {
        return;
    }
    func_020ceb1c(arg0, M2C_FIELD(arg0, u8 *, 0x57) * 0x12C);
}
