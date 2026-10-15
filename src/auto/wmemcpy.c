#include "m2c.h"

M2C_UNK memcpy(M2C_UNK, M2C_UNK, s32);       /* extern */

void wmemcpy(M2C_UNK arg0, M2C_UNK arg1, s32 arg2) {
    memcpy(arg0, arg1, arg2 * 2);
}
