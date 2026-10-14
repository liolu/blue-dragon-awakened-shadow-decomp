#include "m2c.h"

s32 func_0206cdd8();                                /* extern */
s32 func_0206ce7c(M2C_UNK, M2C_UNK);                /* extern */
s32 func_0206cee8(M2C_UNK, M2C_UNK);                /* extern */
s32 func_0206cf24(M2C_UNK, M2C_UNK);                /* extern */

s32 func_0206cf58(M2C_UNK arg0, M2C_UNK arg1) {
    if (func_0206cdd8() == 0) {
        return 0;
    }
    if (func_0206cf24(arg0, arg1) == 0) {
        return 0;
    }
    if (func_0206ce7c(arg0, arg1) == 0) {
        return 0;
    }
    if (func_0206cee8(arg0, arg1) != 0) {
        return 1;
    }
    return 0;
}
