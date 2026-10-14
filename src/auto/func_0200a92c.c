#include "m2c.h"

s32 func_02008ae0();                                /* extern */
M2C_UNK func_02008af4(s32);                         /* extern */
M2C_UNK func_0200aae0(M2C_UNK);                     /* extern */

void func_0200a92c(s32 arg0, M2C_UNK arg1) {
    s32 temp_r4;

    temp_r4 = func_02008ae0();
    func_0200aae0(arg1);
    func_02008af4(temp_r4);
}
