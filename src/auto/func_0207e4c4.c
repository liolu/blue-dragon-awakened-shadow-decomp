#include "m2c.h"

M2C_UNK func_02008fc4();                            /* extern */
M2C_UNK func_0200ea28();                            /* extern */
s32 func_0200eaa0(M2C_UNK *);                       /* extern */
M2C_UNK func_0200eb34(M2C_UNK *);                   /* extern */

void func_0207e4c4(void *arg0) {
    u8 sp0[8];

    func_0200ea28();
    if (func_0200eaa0(sp0) == 0) {
        func_02008fc4();
    } else {
        func_0200eb34(sp0);
    }
    M2C_FIELD(arg0, s8 *, 0x20) = 1;
}
