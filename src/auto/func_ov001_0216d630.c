/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

void func_ov001_0216d630(u32 *out, u8 *in, u32 n) {
    u32 i;

    for (i = 0; i < n; i += 4) {
        *out++ = ((u32) in[i + 3] << 24) | (((u32) in[i + 2] << 16) | ((u32) in[i] | ((u32) in[i + 1] << 8)));
    }
}
