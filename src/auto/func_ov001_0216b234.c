/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

void *func_ov001_0216b1d4(u8 *out, u32 a, void *src, u32 c);

u32 func_ov001_0216b234(u8 *out, u32 a, void *src, u32 c) {
    u8 *ret;
    u32 len;

    out[0]       = 0;
    out[1]       = 0;
    out[2]       = 0;
    out[3]       = 0;
    out[4]       = 0;
    out[5]       = 0;
    out[6]       = 0;
    out[7]       = 0;
    ret          = func_ov001_0216b1d4(out + 8, a, src, c);
    len          = (u32) ret - (u32) out;
    *(u16 *) out = (u16) (len - 8);
    return len;
}
