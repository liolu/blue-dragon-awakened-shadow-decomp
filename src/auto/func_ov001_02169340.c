/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

s32 func_ov001_02169340(u8 *a, u8 *b, s32 n) {
    s32 r = 0;

    while (n-- > 0 && (r = *a - *b) == 0) {
        a++;
        b++;
    }
    return r;
}
