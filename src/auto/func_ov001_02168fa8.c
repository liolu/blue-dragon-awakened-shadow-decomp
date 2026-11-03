/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

extern s16 data_ov001_021953a8;

void func_ov001_02169360(void *dst, void *src, s32 n);
s32 func_ov001_02169100(s32 a, s32 b);
void func_ov001_02169030(void *o, void *x, s32 n, s32 y);
void func_ov001_02169094(void *o, s32 a, s32 b, s32 c);
void func_ov001_02167ea4(s32 v);
void func_ov001_021672f0(s32 a);
s32 func_ov001_021672e0(s32 a);

typedef struct {
    u8 buf[8];
    s32 spc8;
    s32 pad;
} Fr8;

s32 func_ov001_02168fa8(s32 a0, s32 a1, s32 a2, s32 a3, void *a4, void *a5, s32 a6) {
    Fr8 f;
    s32 r;

    f.spc8 = func_ov001_021672e0(a2);
    if (f.spc8 == 0) {
        func_ov001_02167ea4(2);
        return -1;
    }
    func_ov001_02169360(&data_ov001_021953a8, a4, 2);
    func_ov001_02169360(&data_ov001_021953a8 + 1, a5, a6);
    func_ov001_02169030(f.buf, &data_ov001_021953a8, a6 + 2, a2);
    func_ov001_02169094(f.buf, a1, a0, a2);
    r = func_ov001_02169100(a1, a2);
    if (r != a3) {
        func_ov001_02167ea4(0x12);
        func_ov001_021672f0(f.spc8);
        return -1;
    }
    func_ov001_021672f0(f.spc8);
    return 0;
}
