#include "m2c.h"

s32 func_02080f30(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32 *); /* extern */

s32 func_020826ec(s32 arg0, s32 arg1) {
    s32 sp4;

    sp4 = arg1;
    if (func_02080f30(arg0 + 0x2C, 7, 0, 0, &sp4) != 0) {
        return 1;
    }
    return 0;
}
