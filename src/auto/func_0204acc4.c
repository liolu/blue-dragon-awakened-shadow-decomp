#include "m2c.h"
typedef struct {
    u8 *a;
    u8 *b;
} Pair;
typedef struct {
    Pair *items;
    s32 cap;
    s32 n;
} List;
typedef struct {
    u8 pad[0x1010];
    void *(*alloc)(void *, s32);
    void (*free)(void *, void *, s32);
} Heap;
s32 strlen(u8 *);
void strcpy(u8 *, u8 *);
extern u8 data_020f964c;
extern u8 data_020f966c;
extern u8 data_020f968c;
extern u8 data_020f96a8;

s32 func_0204acc4(Heap *h, List *l, u8 *s1, u8 *s2) {
    void *(*al)(void *, s32);
    void (*fr)(void *, void *, s32);

    al = h->alloc;
    fr = h->free;
    if (l->n > l->cap) {
        return 0;
    }
    l->items[l->n].a = al(&data_020f964c, strlen(s1) + 1);
    if (l->items[l->n].a != 0) {
        l->items[l->n].b = al(&data_020f966c, strlen(s2) + 1);
        if (l->items[l->n].b != 0) {
            strcpy(l->items[l->n].a, s1);
            strcpy(l->items[l->n].b, s2);
            l->n = l->n + 1;
            return 1;
        }
    }
    if (l->items[l->n].a != 0) {
        fr(&data_020f968c, l->items[l->n].a, 0);
        l->items[l->n].a = 0;
    }
    if (l->items[l->n].b != 0) {
        fr(&data_020f96a8, l->items[l->n].b, 0);
        l->items[l->n].b = 0;
    }
    return 0;
}
