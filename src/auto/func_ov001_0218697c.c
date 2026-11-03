#include "m2c.h"

typedef struct {
    u32 w;
    u16 h;
    u16 pad;
} Ent;
typedef struct {
    u8 pad[8];
    Ent *ent;
    u8 cnt;
} Tbl;

void func_ov001_0218697c(Tbl *t, s32 idx, u32 b, u32 e) {
    Ent *p = t->ent;
    s32 i;
    if (idx >= 0) {
        p[idx].w = (p[idx].w & ~0xc00) | (b << 10);
        p[idx].h = (p[idx].h & ~0xf000) | (e << 12);
        return;
    }
    for (i = 0; i < t->cnt; i++) {
        p[i].w = (p[i].w & ~0xc00) | (b << 10);
        p[i].h = (p[i].h & ~0xf000) | (e << 12);
    }
}
