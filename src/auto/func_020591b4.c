#include "m2c.h"

M2C_UNK func_02052cec(M2C_UNK, s32);                /* extern */
void *func_02059234();                              /* extern */

s32 func_020591b4(s32 arg0) {
    void *temp_r0;

    if (arg0 != 0) {
        return 1;
    }
    if (M2C_FIELD(func_02059234(), u8 *, 0x15) != 3) {
        temp_r0 = func_02059234();
        M2C_FIELD(temp_r0, u8 *, 0x17D) = (u8) (M2C_FIELD(temp_r0, u8 *, 0x17D) + 1);
    }
    if ((M2C_FIELD(func_02059234(), u8 *, 0x15) == 3) || ((u32) M2C_FIELD(func_02059234(), u8 *, 0x17D) >= 5U)) {
        func_02052cec(6, 0xFFFEAE6C);
        return 0;
    }
    return 1;
}
