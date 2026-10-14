#include "m2c.h"

M2C_UNK func_02007028(void *);                      /* extern */
s32 func_02008ae0();                                /* extern */
M2C_UNK func_02008af4(s32);                         /* extern */

void func_02006fe4(void *arg0) {
    s32 temp_r4;

    temp_r4 = func_02008ae0();
    if (M2C_FIELD(arg0, s32 *, 0x64) != 2) {
        func_02007028(arg0 + 0x9C);
    }
    func_02008af4(temp_r4);
}
