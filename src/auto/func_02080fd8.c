#include "m2c.h"

s32 func_02081298();                                /* extern */
s32 func_02081edc(s32, M2C_UNK);                    /* extern */

s32 func_02080fd8(s32 arg0, M2C_UNK arg1) {
    if (func_02081298() != 0) {
        return 1;
    }
    return func_02081edc(arg0 + 0x710, arg1);
}
