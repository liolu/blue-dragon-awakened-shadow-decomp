/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"
void func_ov001_021681c8(s32 x);
s32 func_ov001_02168b00(s32 a, s32 b, s32 c);
s32 func_ov001_02168c44(s32 a, s32 b, s32 c);
s32 func_ov001_02168d20(s32 a, s32 b, s32 c);
s32 func_ov001_02168aac(s32 k, s32 a, s32 b, s32 c) {
    s32 x;
    s32 y;
    s32 z;
    x = a;
    y = b;
    z = c;
    switch (k) {
        case 0:
            func_ov001_021681c8(2);
            return func_ov001_02168b00(x, y, z);
        case 1:
            func_ov001_021681c8(3);
            return func_ov001_02168c44(x, y, z);
        case 2:
            func_ov001_021681c8(5);
            return func_ov001_02168d20(x, y, z);
        default:
            return -1;
    }
}