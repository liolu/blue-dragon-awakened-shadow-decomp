#include "m2c.h"

M2C_UNK func_02073fa4(void *, M2C_UNK);             /* extern */
M2C_UNK func_02074138(void *);                      /* extern */
M2C_UNK func_020741c8(void *);                      /* extern */

void func_02074208(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x10) == 0) {
        return;
    }
    func_02073fa4(arg0, 0);
    func_02074138(arg0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) > 0) {
        func_020741c8(arg0);
    }
    if (M2C_FIELD(arg0, s32 *, 0x10) != 0) {
        return;
    }
    M2C_FIELD(arg0, M2C_UNK (**)(void *, M2C_UNK, M2C_UNK, s32), 0x44)(arg0, 2, 0, M2C_FIELD(arg0, s32 *, 0x48));
}
