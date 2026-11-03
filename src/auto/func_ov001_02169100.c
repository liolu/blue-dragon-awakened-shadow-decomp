/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

extern u8 data_ov001_02194900[];

s32 func_ov001_02169128(s32 a, void *b, s32 c, s32 d, void *e);

u8 func_ov001_02169100(void *arg0, s32 arg1) {
    s32 z = 0;
    s32 m;
    s32 r;

    m = ~z;
    r = func_ov001_02169128(~z, arg0, arg1, z, data_ov001_02194900);
    return (u8) (r ^ m);
}
