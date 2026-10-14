#include "m2c.h"

M2C_UNK func_02027540(M2C_UNK *, s32);              /* extern */
M2C_UNK func_0202756c(s32, s32);                    /* extern */
M2C_UNK func_02027948(s32, M2C_UNK *);              /* extern */

void func_02027aac(s32 arg0, s32 arg1) {
    u8 sp0[8];
    s32 temp_r4;

    temp_r4 = arg1 - 0x10;
    func_02027540(sp0, temp_r4);
    func_0202756c(arg0 + 0x2C, temp_r4);
    func_02027948(arg0 + 0x24, sp0);
}
