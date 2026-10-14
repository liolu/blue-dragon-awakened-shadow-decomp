#include "m2c.h"

s32 func_020540d0(M2C_UNK, s32, s32, u16, s32 *, s32); /* extern */
void *func_02059234();                              /* extern */

s32 func_02056aec(void) {
    s32 sp8;
    s32 var_r4;
    void *temp_r4;
    void *temp_r5;
    void *temp_r5_2;
    void *temp_r6;
    void *temp_r7;

    var_r4 = 0;
    sp8 = 0;
    if ((M2C_FIELD(func_02059234(), u8 *, 0x17) != 0) && (M2C_FIELD(func_02059234(), s32 *, 0x20) != 0)) {
        temp_r5 = func_02059234();
        if (M2C_FIELD(temp_r5, s32 *, 0x20) != M2C_FIELD(func_02059234(), s32 *, 0x200)) {
            temp_r7 = func_02059234();
            temp_r5_2 = func_02059234();
            temp_r6 = func_02059234();
            temp_r4 = func_02059234();
            var_r4 = func_020540d0(0xC, M2C_FIELD(temp_r7, s32 *, 0x20), M2C_FIELD((temp_r5_2 + ((M2C_FIELD(temp_r6, u8 *, 0xD) + 1) * 4)), s32 *, 0x24), M2C_FIELD((temp_r4 + ((M2C_FIELD(func_02059234(), u8 *, 0xD) + 1) * 2)), u16 *, 0xA4), &sp8, 1);
            M2C_FIELD(func_02059234(), s8 *, 0x17) = 0;
            M2C_FIELD(func_02059234(), s32 *, 0x20) = 0;
        }
    }
    return var_r4;
}
