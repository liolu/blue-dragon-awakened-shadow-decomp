#include "m2c.h"

void gti2UShortToBuffer(s32 arg0, s32 arg1, s8 arg2) {
    *(s8 *) (arg0 + arg1)       = (s8) (arg2 >> 8);
    *(s8 *) (arg0 + (arg1 + 1)) = arg2;
}