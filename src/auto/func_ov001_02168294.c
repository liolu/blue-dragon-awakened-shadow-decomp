/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

extern s32 data_ov001_02194680;
extern s32 data_ov001_02194640;

s32 func_ov001_02168624(s32, u8 *);
s32 func_ov001_0216947c(u16);
s32 func_ov001_02169454(s32);
void func_ov001_02167ea4(s32);
s32 func_ov001_02168670(u8 *, s32 *);
s32 func_ov001_02168a9c(s32);

s32 func_ov001_02168294(s32 a0, u8 *a1, s32 *a2, s32 a3) {
    u8 *r7;
    u8 *r4;
    s32 r;
    u16 v;

    if (a0 != 0) {
        *a2 = *a2 + 1;
        return a0;
    }
    r7 = a1 + 0xC;
    r4 = a1 + 0x24;
    if (func_ov001_02168624(a3, r7 + 0x10) < 0) {
        *a2 = *a2 + 1;
        return a0;
    }
    v = *(u16 *) (r4 + 2);
    if (func_ov001_0216947c(v) == 0) {
        *a2 = *a2 + 1;
        return a0;
    }
    if (r4[0] == 7) {
        if (func_ov001_02169454(*(s32 *) (r4 + 4)) == -2) {
            func_ov001_02167ea4(0x14);
        } else if (func_ov001_02169454(*(s32 *) (r4 + 4)) == -3) {
            func_ov001_02167ea4(0x15);
        } else {
            func_ov001_02167ea4(0x18);
        }
        return ~0;
    }
    if (r4[0] != 1) {
        *a2 = *a2 + 1;
        return a0;
    }
    r = func_ov001_02168670(r4 + 4, &data_ov001_02194680);
    if (r < 0) {
        if (r == -2) {
            func_ov001_02167ea4(0x16);
            return ~0;
        }
        *a2 = *a2 + 1;
        return a0;
    }
    v                   = *(u16 *) (r7 + 0xC);
    data_ov001_02194640 = func_ov001_02168a9c(func_ov001_0216947c(v));
    *a2                 = 0;
    return 1;
}
