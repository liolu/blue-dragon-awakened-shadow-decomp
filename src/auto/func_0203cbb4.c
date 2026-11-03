#include "m2c.h"
s32 func_0203cbb4(u8 **pp) {
    u8 *p = *pp;
    u32 v = *p++;
    u32 t = v & 0x80;
    s32 n;
    if (t) {
        t = v & 0x7f;
        n = t - 1;
        v = 0;
        if (t != 0) {
            for (;;) {
                t = v & 0xff000000;
                if (t) {
                    return -1;
                }
                v = *p++ + (v << 8);
                if (n-- == 0) {
                    break;
                }
            }
        }
    }
    *pp = p;
    return v;
}
