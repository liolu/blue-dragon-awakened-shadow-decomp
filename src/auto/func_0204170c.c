#include "m2c.h"
void func_0204170c(u8 *d, u16 *s, s32 n) {
    u8 *t;
    u16 v;
    d += n - 1;
    if (n > 1) {
        do {
            n -= 2;
            t  = d - 1;
            *d = *s;
            v  = *s;
            s++;
            d -= 2;
            *t = v >> 8;
        } while (n > 1);
    }
    if (n > 0) {
        *d = *s;
    }
}