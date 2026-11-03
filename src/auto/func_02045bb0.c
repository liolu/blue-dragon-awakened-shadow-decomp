#include "m2c.h"
typedef struct {
    u8 p0;
    u8 a;
    u8 p2;
    u8 b;
    u8 d[8];
    u8 q[0x18];
} E;
typedef struct {
    u8 k : 4;
    u8 r : 4;
} K;
extern u8 func_02045cfc(u8 *);
extern void MI_CpuCopy8(void *, void *, s32);
extern u8 data_020e4c20[];
u8 func_02045bb0(u8 *o) {
    E *e = (E *) (o + 0x300);
    u8 n = func_02045cfc(o);
    e    = e + n;
    if (((K *) (o + 0xd0c))->k == 0 || ((K *) (o + 0xd0c))->k == 6) {
        MI_CpuCopy8(data_020e4c20, e->d, 8);
        e->b = 8;
        e->a = 8;
        n    = n + 1;
    }
    return n;
}
