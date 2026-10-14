#include "m2c.h"

M2C_UNK func_02007a48(s32, M2C_UNK);                /* extern */
M2C_UNK func_0200a328();                            /* extern */
M2C_UNK func_0200a33c();                            /* extern */

void func_0200b090(s32 arg0, s32 arg1, s32 arg2) {
    func_0200a328();
    M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x3C) = arg2;
    func_02007a48(arg0 + 0x3C + (arg1 * 4), 4);
    func_0200a33c();
}
