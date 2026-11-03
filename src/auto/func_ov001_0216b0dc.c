/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

s32 func_ov001_0216b08c(void *ctx, u8 *p, s32 a, s32 b);

s32 func_ov001_0216b0dc(u8 *arg0, s32 arg1, s32 arg2) {
    u8 *ctx;
    u16 v;
    u16 off;

    ctx = arg0 + 8;
    v   = *(u16 *) arg0;
    off = (u16) (((v >> 8) & 0xFF) | ((v << 8) & 0xFF00));
    return func_ov001_0216b08c(&ctx, arg0 + 8 + off, arg1, arg2);
}
