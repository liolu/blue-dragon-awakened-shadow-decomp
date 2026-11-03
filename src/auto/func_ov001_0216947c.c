/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

u16 func_ov001_0216947c(s32 arg0) {
    return (u16) ((u8) (arg0 >> 8) | ((arg0 << 8) & 0xFF00));
}
