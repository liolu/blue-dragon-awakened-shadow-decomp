#include "m2c.h"

s32 func_02080f30(s32, M2C_UNK, s32, M2C_UNK, s32); /* extern */

s32 func_02082594(s32 arg0, s32 arg1, s32 arg2) {
    if ((arg1 > 0) && (func_02080f30(arg0 + 0x2C, 0xB, arg1, 0, arg2) == 0)) {
        return 0;
    }
    return 1;
}
