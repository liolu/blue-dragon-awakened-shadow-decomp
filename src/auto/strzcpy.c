#include "m2c.h"

M2C_UNK strncpy();                            /* extern */

void strzcpy(s32 arg0, s32 arg1, s32 arg2) {
    strncpy();
    M2C_FIELD((arg0 + arg2), s8 *, -1) = 0;
}
