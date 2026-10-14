#include "m2c.h"

M2C_UNK func_020d8774(void *, M2C_UNK, M2C_UNK);    /* extern */
void *func_020dde08();                              /* extern */
M2C_UNK func_020ddf00(void *);                      /* extern */
M2C_UNK func_ov000_021be234(void *, M2C_UNK, M2C_UNK); /* extern */

void func_020de010(void *arg0, M2C_UNK arg1, s32 arg2) {
    void *temp_r0;

    temp_r0 = func_020dde08();
    if (temp_r0 == NULL) {
        return;
    }
    func_ov000_021be234(temp_r0, arg1, 0x1B);
    M2C_FIELD(temp_r0, s32 *, 0x3C) = 1;
    M2C_FIELD(temp_r0, s32 *, 0x38) = arg2;
    if (M2C_FIELD(arg0, s32 *, 0x54) == 0) {
        M2C_FIELD(arg0, s32 *, 0x54) = 1;
        func_020d8774(arg0 + 8, 0, 0);
    }
    func_020ddf00(arg0);
}
