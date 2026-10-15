#include "m2c.h"

M2C_UNK func_02027f74(s32, s32, M2C_UNK);           /* extern */
s32 func_0207d4a4(M2C_UNK);                         /* extern */

void func_0207e8b0(void *arg0) {
    s32 temp_r0;

    if (M2C_FIELD(arg0, s32 *, 0x10) != 0) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0xC) == 0) {
        return;
    }
    temp_r0                      = func_0207d4a4(0x10);
    M2C_FIELD(arg0, s32 *, 0x10) = temp_r0;
    func_02027f74(temp_r0, M2C_FIELD(arg0, s32 *, 0xC), 4);
}
