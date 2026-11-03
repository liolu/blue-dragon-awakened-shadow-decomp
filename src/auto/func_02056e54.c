#include "m2c.h"
u8 *func_02059234(void);
s32 func_020540d0(s32, s32, s32, s32, s32 *, s32);
s32 func_02055940(s32);
s32 func_020579a8(s32, s32);
s32 func_0204e20c(s32);
s32 func_02056e54(s32 mask) {
    s32 arrB[32];
    s32 arrA[32];
    s32 cntB;
    s32 cntA;
    s32 i;
    s32 k;
    u8 *p;
    cntB = 0;
    cntA = 0;
    i    = 1;
    for (; i <= func_02059234()[0xd]; i++) {
        p = func_02059234();
        if ((mask & (1 << p[i + 0x2d0])) != 0) {
            arrA[cntA] = ((s32 *) (func_02059234() + 0xf4))[i];
            cntA++;
        } else {
            arrB[cntB] = ((s32 *) (func_02059234() + 0xf4))[i];
            cntB++;
        }
    }
    for (k = 0; k < cntA; k++) {
        if (func_02055940(func_020540d0(0x10, arrA[k], 0, 0, arrB, cntB)) != 0) {
            return 0;
        }
    }
    func_02059234()[0x1a8] = 2;
    for (k = 0; k < cntB; k++) {
        s32 r = func_020579a8(arrB[k], 0);
        if (r != 0xff) {
            func_0204e20c(r);
        }
    }
    func_02059234()[0x1a8] = 0;
    return 1;
}
