#include "m2c.h"

M2C_UNK func_0200a194(s32, s32);                    /* extern */
M2C_UNK func_02034588(s32, M2C_UNK, M2C_UNK);       /* extern */

void func_020345e0(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    func_02034588(arg0, arg2, arg3);
    func_0200a194(arg0, arg0 + arg1);
}
