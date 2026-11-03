/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

extern s16 data_ov001_021953a8;

s16 func_ov001_021694a8(void);
void func_ov001_02169360(void *dst, void *src, s32 n);
s8 func_ov001_02169100(s32 a, s32 b);
s32 func_ov001_021672e0(s32 a);
void func_ov001_021672f0(s32 a);
void func_ov001_02169030(void *o, void *x, s32 n, s32 y);
void func_ov001_02169094(void *o, s32 a, s32 b, s32 c);

typedef struct {
    s16 sp0;
    u8 pad0[2];
    u8 sp4[8];
    s32 spc;
    s32 pad;
} Fr20;

s32 func_ov001_02168f2c(s32 a0, s32 a1, s32 a2, u8 *a3, s16 *a4, s16 *a5, s32 a6) {
    Fr20 f;

    *a3   = func_ov001_02169100(a0, a2);
    f.spc = func_ov001_021672e0(a2);
    if (f.spc == 0) {
        return -1;
    }
    f.sp0 = func_ov001_021694a8();
    func_ov001_02169360(a4, &f.sp0, 2);
    func_ov001_02169360(&data_ov001_021953a8, a4, 2);
    func_ov001_02169360(&data_ov001_021953a8 + 1, a5, a6);
    func_ov001_02169030(f.sp4, &data_ov001_021953a8, a6 + 2, a2);
    func_ov001_02169094(f.sp4, a1, a0, a2);
    func_ov001_021672f0(f.spc);
    return 0;
}
