#include "m2c.h"
typedef struct {
    u32 w0;
    u16 h;
    u16 z;
} Ent;
typedef struct {
    u32 x;
    u32 y;
    Ent *ents;
    u8 n;
} Tbl;
void func_ov001_02186aec(Tbl *t, s32 idx, u32 v) {
    Ent *e = t->ents;
    s32 i;
    if (idx >= 0) {
        e[idx].h = (e[idx].h & ~0xc00) | (v << 10);
        return;
    }
    for (i = 0; i < t->n; i++) {
        e[i].h = (e[i].h & ~0xc00) | (v << 10);
    }
}
