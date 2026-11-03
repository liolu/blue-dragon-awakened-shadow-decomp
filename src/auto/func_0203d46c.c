#include "m2c.h"
s32 func_0203d46c(s8 *a) {
    s8 *s = a;
    for (; *a != 46 && *a != 0; a++)
        ;
    return a - s;
}