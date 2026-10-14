#include "m2c.h"

M2C_UNK func_02017b54(s32, s32, s32);               /* extern */
M2C_UNK func_0205b7b8();                            /* extern */
M2C_UNK func_0205b7e8(void *, M2C_UNK, s32);        /* extern */
s32 func_0205b8b4(void *, s32);                     /* extern */

void func_0205b8f8(void *arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_r0;
    s32 temp_r7;
    s32 temp_r8;

    if (M2C_FIELD(arg0, s32 *, 0) == M2C_FIELD(arg0, s32 *, 4)) {
        func_0205b7b8(arg0);
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0) + 1;
    temp_r8 = temp_r0 - 1;
    M2C_FIELD(arg0, s32 *, 0) = temp_r0;
    if (arg2 < temp_r8) {
        temp_r7 = func_0205b8b4(arg0, arg2 + 1);
        func_02017b54(temp_r7, func_0205b8b4(arg0, arg2), M2C_FIELD(arg0, s32 *, 8) * (temp_r8 - arg2));
    }
    func_0205b7e8(arg0, arg1, arg2);
}
