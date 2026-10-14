#include "m2c.h"

s32 func_0205c290(M2C_UNK);                         /* extern */
M2C_UNK func_02077944(s32, s32, u16, M2C_UNK, s32); /* extern */

void func_0207523c(s32 arg0, M2C_UNK arg1, s32 arg2, M2C_UNK arg3, s32 arg4) {
    func_02077944(arg0 + 0x4C, func_0205c290(arg1), (u16) ((u8) (arg2 >> 8) | ((arg2 << 8) & 0xFF00)), arg3, arg4);
}
