#include "m2c.h"

M2C_UNK func_0207d4cc();                            /* extern */

void func_020adb0c(void *arg0, s32 arg1) {
    s32 temp_r0;

    M2C_FIELD(arg0, s8 *, 0xC) = (s8) (M2C_FIELD(arg0, s8 *, 0xC) - arg1);
    if ((s32) M2C_FIELD(arg0, s8 *, 0xC) > 0) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_r0 == 0) {
        return;
    }
    if (temp_r0 != 0) {
        func_0207d4cc();
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
    M2C_FIELD(arg0, s8 *, 0xC) = 0;
}
