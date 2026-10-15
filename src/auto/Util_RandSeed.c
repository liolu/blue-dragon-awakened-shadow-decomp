#include "m2c.h"

extern s32 randomnum;

void Util_RandSeed(s32 arg0) {
    s32 var_r1;

    if (arg0 != 0) {
        var_r1 = arg0 & ~0x80000000;
    } else {
        var_r1 = 1;
    }
    randomnum = var_r1;
}
