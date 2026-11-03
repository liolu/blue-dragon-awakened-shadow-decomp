/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

s32 func_ov001_0216872c(u8 *arg0, s32 arg1) {
    u32 acc;
    s32 i;
    u32 t;
    u8 b;
    u8 *p;

    acc = 0;
    p   = arg0 + (arg1 - 1);
    i   = acc;
    if (arg1 > 0) {
        do {
            t   = acc << 8;
            b   = *p--;
            acc = t + b;
            i++;
        } while (i < arg1);
    }
    return acc;
}
