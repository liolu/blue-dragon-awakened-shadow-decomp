#include "m2c.h"

M2C_UNK func_020097ec(M2C_UNK, s32, M2C_UNK);       /* extern */
s32 func_020449a8(M2C_UNK);                         /* extern */

void func_020447b4(s32 arg0, M2C_UNK arg1) {
    func_020097ec(arg1, func_020449a8(0x10) + (arg0 << 8), 0xF0);
}
