#include "m2c.h"

M2C_UNK func_02010210(M2C_UNK *);                   /* extern */
M2C_UNK func_020102bc(M2C_UNK *);                   /* extern */
s32 func_02010aa4(M2C_UNK *, M2C_UNK *);            /* extern */

s32 func_0203ca78(void) {
    u8 spC[16];
    u8 sp0[12];

    func_02010210(spC);
    func_020102bc(sp0);
    return func_02010aa4(spC, sp0) + 0x386D4380;
}
