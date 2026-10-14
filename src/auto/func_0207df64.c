#include "m2c.h"

M2C_UNK func_020032b4(s32, s32);                    /* extern */
extern M2C_UNK data_02110430;

void func_0207df64(s32 arg0) {
    func_020032b4(0x0400106C, arg0);
    M2C_FIELD(&data_02110430, s32 *, 0x10) = arg0;
}
