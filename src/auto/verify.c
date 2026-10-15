#include "m2c.h"

s32 memcmp(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
s32 readNvram(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */

s32 verify(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    if (readNvram(arg1, arg2, arg3) == 0) {
        return 0;
    }
    if (memcmp(arg0, arg3, arg2) == 0) {
        return 1;
    }
    return 0;
}
