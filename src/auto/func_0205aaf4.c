#include "m2c.h"

s32 func_02017be0(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
s32 func_0205a9e8(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */

s32 func_0205aaf4(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    if (func_0205a9e8(arg1, arg2, arg3) == 0) {
        return 0;
    }
    if (func_02017be0(arg0, arg3, arg2) == 0) {
        return 1;
    }
    return 0;
}
