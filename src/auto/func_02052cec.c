#include "m2c.h"

M2C_UNK DWCi_SetError(s32, M2C_UNK);                /* extern */
s32 func_02050324(s32);                             /* extern */
M2C_UNK func_020503c0(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_02053a28();                            /* extern */
M2C_UNK func_02056e24();                            /* extern */
void *func_02059234();                              /* extern */
extern M2C_UNK data_020fa78c;

void func_02052cec(s32 arg0, M2C_UNK arg1) {
    M2C_UNK var_r7;
    M2C_UNK var_r8;
    s32 temp_r5;
    void *temp_r6;

    if ((func_02059234() != NULL) && (arg0 != 0)) {
        func_02056e24();
        DWCi_SetError(arg0, arg1);
        func_020503c0(1, &data_020fa78c, 0);
        if (M2C_FIELD(func_02059234(), u8 *, 0x15) == 2) {
            var_r7 = 1;
        } else {
            var_r7 = 0;
        }
        if (M2C_FIELD(func_02059234(), s32 *, 0x20C) == 0) {
            var_r8 = 1;
        } else {
            var_r8 = 0;
        }
        temp_r6 = func_02059234();
        temp_r5 = func_02050324(M2C_FIELD(func_02059234(), s32 *, 0x20C));
        M2C_FIELD(temp_r6, M2C_UNK(**)(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32),
                  0x464)(arg0, 0, var_r8, var_r7, temp_r5, M2C_FIELD(func_02059234(), s32 *, 0x468));
        func_02053a28();
    }
}
