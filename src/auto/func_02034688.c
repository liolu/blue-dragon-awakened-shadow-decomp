#include "m2c.h"

M2C_UNK func_0200a1d4(s32, s32);                    /* extern */
M2C_UNK func_0200b090(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_0200b0c4(M2C_UNK, M2C_UNK);                /* extern */

void func_02034688(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    if (arg0 == func_0200b0c4(arg2, arg3)) {
        func_0200b090(arg2, arg3, 0);
    }
    func_0200a1d4(arg0, arg0 + arg1);
}
