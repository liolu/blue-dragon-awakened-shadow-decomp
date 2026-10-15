#include "m2c.h"

M2C_UNK func_02052cec(M2C_UNK, s32);                /* extern */
s32 func_02055df0(M2C_UNK);                         /* extern */
M2C_UNK func_02056cc0();                            /* extern */
M2C_UNK func_02056e24();                            /* extern */
void *func_02059234();                              /* extern */
M2C_UNK func_02059244(M2C_UNK);                     /* extern */
M2C_UNK NNCancel(s32);                         /* extern */

s32 func_02056138(void) {
    s32 var_r4;
    void *temp_r5;

    var_r4 = 1;
    if (M2C_FIELD(func_02059234(), u8 *, 0x15) == 3) {
        if (M2C_FIELD(func_02059234(), u8 *, 0xD) != 0) {
            func_02056e24();
        }
        func_02052cec(6, 0xFFFEC5D2);
        return 0;
    }
    temp_r5                                  = func_02059234();
    M2C_FIELD(temp_r5, u8 *, 0x14)           = (u8) M2C_FIELD(func_02059234(), u8 *, 0xD);
    M2C_FIELD(func_02059234(), s32 *, 0x208) = 0;
    if (M2C_FIELD(func_02059234(), s32 *, 0x19C) != 0) {
        NNCancel(M2C_FIELD(func_02059234(), s32 *, 0x19C));
        M2C_FIELD(func_02059234(), s32 *, 0x19C) = 0;
    }
    if (M2C_FIELD(func_02059234(), u8 *, 0xD) != 0) {
        func_02056cc0();
    } else {
        func_02059244(4);
        var_r4 = func_02055df0(0);
    }
    return var_r4;
}
