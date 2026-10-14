#include "m2c.h"

M2C_UNK func_02006b24();                            /* extern */
s32 func_02008ae0();                                /* extern */
M2C_UNK func_02008af4(s32);                         /* extern */

void func_02007130(void) {
    s32 temp_r4;

    temp_r4 = func_02008ae0();
    func_02006b24();
    func_02008af4(temp_r4);
}
