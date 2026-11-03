/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

void func_ov001_0216d604(u8 *out, u32 *in, u32 n) {
    u32 i;

    for (i = 0; i < n; i += 4) {
        out[i]     = *in;
        out[i + 1] = *in >> 8;
        out[i + 2] = *in >> 16;
        out[i + 3] = *in >> 24;
        in++;
    }
}
