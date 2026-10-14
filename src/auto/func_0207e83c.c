#include "m2c.h"

s32 func_02007e70(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
s32 func_02027a38(s32, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK func_0207e8b0(void *);                      /* extern */

void func_0207e83c(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xC) == 0) {
        M2C_FIELD(arg0, s32 *, 0xC) = func_02027a38(func_02007e70(0, 0x6000, 0x10), 0x6000, 0);
    }
    func_0207e8b0(arg0);
}
