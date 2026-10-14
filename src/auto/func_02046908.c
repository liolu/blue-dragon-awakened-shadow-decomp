#include "m2c.h"

s32 func_0203c498(s32);                             /* extern */
s32 func_020449a8(M2C_UNK);                         /* extern */
M2C_UNK func_02044a7c(M2C_UNK);                     /* extern */
M2C_UNK func_02046ad8(s32, M2C_UNK, s32);           /* extern */
extern s32 data_0210e260;

s32 func_02046908(M2C_UNK arg0) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r5 = func_020449a8(1);
    temp_r0 = func_020449a8(4);
    func_02046ad8(temp_r5, arg0, temp_r0);
    data_0210e260 = 4;
    if (func_0203c498(temp_r0) == 0) {
        return 0xC;
    }
    func_02044a7c(2);
    return 0x11;
}
