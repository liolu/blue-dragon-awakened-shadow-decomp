#include "m2c.h"

s32 func_02050324(s32);                             /* extern */
M2C_UNK func_020503c0(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_02053a28();                            /* extern */
s32 func_02057f34();                                /* extern */
void *func_02059234();                              /* extern */
extern M2C_UNK data_020fa78c;

void func_02056a2c(void) {
    M2C_UNK var_r6;
    M2C_UNK var_r7;
    s32 temp_r4;
    void *temp_r5;

    func_020503c0(1, &data_020fa78c, 0);
    if (func_02057f34() != 0) {
        return;
    }
    func_02053a28();
    if (M2C_FIELD(func_02059234(), s32 *, 0x20C) != 0) {
        var_r6 = 1;
    } else if (M2C_FIELD(func_02059234(), u8 *, 0x15) == 2) {
        var_r6 = 1;
    } else {
        var_r6 = 0;
    }
    if (M2C_FIELD(func_02059234(), s32 *, 0x20C) == 0) {
        var_r7 = 1;
    } else {
        var_r7 = 0;
    }
    temp_r5 = func_02059234();
    temp_r4 = func_02050324(M2C_FIELD(func_02059234(), s32 *, 0x20C));
    M2C_FIELD(temp_r5, M2C_UNK(**)(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32),
              0x464)(0, 1, var_r7, var_r6, temp_r4, M2C_FIELD(func_02059234(), s32 *, 0x468));
    M2C_FIELD(func_02059234(), s8 *, 0x1A9) = 0;
}
