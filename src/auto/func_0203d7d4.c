/* compiler: 1.2/sp3 */
#include "m2c.h"
s32 func_0203d7d4(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *p;
    s32 i;
    s32 hi;
    s32 lo;
    s32 v;
    p = arg0;
    i = 0;
    if (arg1 > 0) {
        do {
            hi = p[0];
            lo = p[1];
            v  = (hi << 8) + lo;
            if (arg2 == 3) {
                v = (v << 8) + p[2];
            }
            if (v == arg3) {
                return 1;
            }
            i += 1;
            p += arg2;
        } while (i < arg1);
    }
    return 0;
}