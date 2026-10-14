#include "m2c.h"

s32 func_0205c290(M2C_UNK);                         /* extern */
M2C_UNK func_02077a6c(s32, s32, u16, M2C_UNK);      /* extern */

void func_02075294(s32 arg0, M2C_UNK arg1, s32 arg2, M2C_UNK arg3) {
    func_02077a6c(arg0 + 0x4C, func_0205c290(arg1), (u16) ((u8) (arg2 >> 8) | ((arg2 << 8) & 0xFF00)), arg3);
}
