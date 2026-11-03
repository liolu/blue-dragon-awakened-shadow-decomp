#include "m2c.h"
u32 Sha1ExpandWord(u32 i, u32 *a) {
    u32 t = a[i] ^ (a[(i + 2) & 15] ^ (a[(i + 13) & 15] ^ a[i ^ 8]));
    a[i]  = (t << 1) | (t >> 31);
    return a[i];
}