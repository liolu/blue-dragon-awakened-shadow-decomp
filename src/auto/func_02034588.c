#include "m2c.h"

s32 func_02008ae0();                                /* extern */
M2C_UNK func_02008af4(s32);                         /* extern */
s32 func_020336f4(s32);                             /* extern */
s32 func_02033a64(M2C_UNK);                         /* extern */
M2C_UNK func_02033a8c(M2C_UNK, M2C_UNK);            /* extern */

void func_02034588(s32 arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_r4;
    s32 temp_r5;

    if (arg1 == 0) {
        return;
    }
    temp_r5 = func_02008ae0();
    temp_r4 = func_020336f4(arg1);
    if (arg0 == func_02033a64(arg2)) {
        func_02033a8c(arg2, 0);
    }
    func_020336f4(temp_r4);
    func_02008af4(temp_r5);
}
