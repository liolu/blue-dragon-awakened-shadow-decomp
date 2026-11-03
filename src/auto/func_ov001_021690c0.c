/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

typedef struct {
    s32 i;
    s32 j;
    u8 *tbl;
    s32 n;
} Rc4St;

u8 func_ov001_021690c0(Rc4St *s) {
    u8 *t = s->tbl;
    u32 n = s->n;
    u8 i;
    u8 j;
    u8 a;
    u8 b;

    i    = (u8) ((u32) (s->i + 1) % n);
    a    = t[i];
    j    = (u8) ((u32) (a + s->j) % n);
    b    = t[j];
    s->i = i;
    s->j = j;
    t[j] = a;
    t[i] = b;
    return t[(u32) (a + b) % s->n];
}
