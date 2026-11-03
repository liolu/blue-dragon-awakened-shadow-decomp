#include "m2c.h"
u8 *func_02059234(void);
u64 OS_GetTick(void);
s32 func_0204e34c(void);
s32 func_02056138(s32);
void func_02056f90(s32, s32);
void func_02056e24(void);
void func_02056bc0(s32);
s32 func_02056e54(s32);
s32 func_02055f1c(s32);
void func_020562dc(s32);

s32 func_02057080(void) {
    u64 t;
    s32 i;
    u8 *p;
    if (*(s32 *) (func_02059234() + 0x1A0) == 9 || *(s32 *) (func_02059234() + 0x1A0) == 16 ||
        *(s32 *) (func_02059234() + 0x1A0) == 17) {
        u64 now = OS_GetTick();
        u8 *g   = func_02059234();
        t       = ((now - *(u64 *) (g + 0x1E0)) << 6) / 0x82EA;
    } else {
        return 1;
    }
    switch (*(s32 *) (func_02059234() + 0x1A0)) {
        case 9:
            if (t > 0x1770) {
                if (func_0204e34c() == 5 && *(u8 *) (func_02059234() + 0x1AD) >= 5) {
                    if (func_02056138(*(s32 *) (func_02059234() + 0xF4)) == 0) {
                        return 0;
                    }
                } else {
                    u8 *g    = func_02059234();
                    g[0x1AD] = g[0x1AD] + 1;
                    func_02056f90(func_02059234()[0x2D0], 3);
                }
            }
            break;
        case 16:
            if (t > 0x1770) {
                u8 *g    = func_02059234();
                g[0x1AB] = g[0x1AB] + 1;
                if (func_02059234()[0x1AB] > 5) {
                    if (func_02059234()[0x15] == 0 || func_02059234()[0x15] == 1) {
                        func_02056e24();
                        func_02056bc0(1);
                    } else {
                        if (func_02056e54(*(s32 *) (func_02059234() + 0x1D4)) == 0) {
                            return 0;
                        }
                        if (func_02059234()[0xD] != 0) {
                            u8 *h;
                            func_02059234()[0x1AB] = 0;
                            h                      = func_02059234();
                            *(u64 *) (h + 0x1E0)   = OS_GetTick();
                        } else {
                            if (func_02055f1c(*(s32 *) (func_02059234() + 0x20C)) == 0) {
                                return 0;
                            }
                        }
                    }
                } else {
                    for (i = 1; i <= func_02059234()[0xD]; i++) {
                        u8 *q = func_02059234();
                        if (((1 << *(u8 *) (func_02059234() + (i + 0x2D0))) & *(s32 *) (q + 0x1D4)) == 0) {
                            func_02056f90(*(u8 *) (func_02059234() + (i + 0x2D0)), 2);
                        }
                    }
                }
            }
            break;
        case 17:
            if (t > *(u16 *) (func_02059234() + 0x1B0)) {
                func_020562dc(4);
            }
            break;
    }
    return 1;
}
