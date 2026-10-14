#include "m2c.h"

M2C_UNK func_02017b54();               /* extern */
s32 func_0205b8b4();                     /* extern */

void func_0205b9d0(void *arg0, s32 arg1) {
    s32 temp_r5;
    s32 temp_r6;

    temp_r6 = M2C_FIELD(arg0, s32 *, 0) - 1;
    if (arg1 < temp_r6) {
        temp_r5 = func_0205b8b4(arg0);
        func_02017b54(temp_r5, func_0205b8b4(arg0, arg1 + 1), M2C_FIELD(arg0, s32 *, 8) * (temp_r6 - arg1));
    }
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) - 1);
}
