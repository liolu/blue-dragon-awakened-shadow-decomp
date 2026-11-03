/* compiler: 2.0/sp1p5 -thumb */
typedef unsigned int u32;

u32 func_ov001_02167e08(u32 a, u32 b) {
    u32 hi = a & b;
    u32 x  = hi | ((a & ~b) + 1);
    u32 y  = hi | ~b;
    if (x >= y) {
        x = hi | 1;
    }
    return x;
}
