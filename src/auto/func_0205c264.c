#include "m2c.h"

s32 func_0203c2b8();                                /* extern */
M2C_UNK func_0205c0b4(s32, M2C_UNK);                /* extern */

void func_0205c264(s32 arg0, u8 *arg1, s32 *arg2) {
    s32 temp_r0;

    *arg1 = (u8) *arg2;
    temp_r0 = func_0203c2b8(arg0);
    *arg2 = (s32) *arg1;
    func_0205c0b4(temp_r0, -1);
}
