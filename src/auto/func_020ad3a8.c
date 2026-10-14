#include "m2c.h"

M2C_UNK func_0207d4cc();                            /* extern */

void func_020ad3a8(void *arg0) {
    s32 temp_r0;

    M2C_FIELD(arg0, s8 *, 8) = (s8) (M2C_FIELD(arg0, s8 *, 8) - 1);
    if ((s32) M2C_FIELD(arg0, s8 *, 8) > 0) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r0 == 0) {
        return;
    }
    if (temp_r0 != 0) {
        func_0207d4cc();
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
    M2C_FIELD(arg0, s8 *, 8) = 0;
}
