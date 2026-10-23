/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

s32 func_ov001_02169454(u32 arg0) {
    return ((arg0 << 0x18) & 0xFF000000) | (((arg0 << 8) & 0xFF0000) | ((u8) (arg0 >> 0x18) | ((arg0 >> 8) & 0xFF00)));
}
