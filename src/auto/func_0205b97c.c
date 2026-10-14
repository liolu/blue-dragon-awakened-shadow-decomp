#include "m2c.h"

s32 func_02024d70(s32, s32);                        /* extern */
M2C_UNK func_0205b8f8(void *, M2C_UNK, s32);        /* extern */
s32 func_0205bc5c(M2C_UNK, s32, s32, s32, s32, M2C_UNK *); /* extern */

void func_0205b97c(void *arg0, M2C_UNK arg1, s32 arg2) {
    M2C_UNK sp8;

    func_0205b8f8(arg0, arg1, func_02024d70(func_0205bc5c(arg1, M2C_FIELD(arg0, volatile s32 *, 0x14), M2C_FIELD(arg0, volatile s32 *, 0), M2C_FIELD(arg0, volatile s32 *, 8), arg2, &sp8) - M2C_FIELD(arg0, volatile s32 *, 0x14), M2C_FIELD(arg0, volatile s32 *, 8)));
}
