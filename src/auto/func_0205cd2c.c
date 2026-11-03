#include "m2c.h"
extern u8 data_0210f1a4[];
extern u16 data_0210f19c[];
extern u8 data_020fa958[];
s32 memcmp(void *, void *, s32);
s32 func_0205cd2c(s8 *a, s32 len, u8 *b, u32 *out) {
    u32 v;
    if (len < 7) {
        return 1;
    }
    if (memcmp(b + 4, data_0210f1a4, 4) != 0) {
        return 1;
    }
    if (*(u16 *) (b + 2) != data_0210f19c[3]) {
        return 1;
    }
    if (memcmp(a, data_020fa958, 3) != 0) {
        return 1;
    }
    v = (a[3] << 24) & 0xff000000;
    v |= (a[4] << 16) & 0xff0000;
    v |= (a[5] << 8) & 0xff00;
    v |= a[6] & 0xff;
    *out = v;
    return 0;
}
