/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

void func_ov001_0216d65c(u8 *dst, u8 *src, u32 n) {
    u32 i;
    s32 pad;

    i = 0;
    while (i < n) {
        dst[i] = src[i];
        i++;
    }
}
