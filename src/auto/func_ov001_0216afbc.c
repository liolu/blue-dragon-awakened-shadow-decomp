/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

s32 SOC_SendTo(void *a, s32 b, s32 c, s32 d, s32 e);

s32 func_ov001_0216afbc(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 r;

    r = SOC_SendTo(arg0, arg3, arg4, 0, arg1);
    if (r < 0) {
        r = -4;
    }
    return r;
}
